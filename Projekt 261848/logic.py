import json
import os

class GameManager:
    def __init__(self, filename="games.json"):
        self.filename = filename
        self.games = []
        self.load_games()

    def add_game(self, game_name):
        self.games.append({"title": game_name, "completed": False})
        self.save_games()

    def remove_game(self, index):
        if 0 <= index < len(self.games):
            self.games.pop(index)
            self.save_games()

    def toggle_game_status(self, index):
        if 0 <= index < len(self.games):
            self.games[index]["completed"] = not self.games[index]["completed"]
            self.save_games() 

    def get_games(self):
        return [f"[{'🏆 Ograne' if game['completed'] else '🎮 W toku'}] {game['title']}" for game in self.games]

    def save_games(self):
        try:
            with open(self.filename, "w", encoding="utf-8") as file:
                json.dump(self.games, file, ensure_ascii=False, indent=4)
        except Exception as e:
            print(f"Błąd podczas zapisu do pliku: {e}")

    def load_games(self):
        if os.path.exists(self.filename):
            try:
                with open(self.filename, "r", encoding="utf-8") as file:
                    self.games = json.load(file)
            except Exception as e:
                print(f"Błąd podczas wczytywania pliku: {e}")
                self.games = []