from logic import GameManager

def show_menu():
    print("\n--- 🎮 MENEDŻER GIER 🎮 ---")
    print("1. Zobacz swoją listę gier")
    print("2. Dodaj grę do ogrania")
    print("3. Zmień status gry (W toku / Ograne)")
    print("4. Usuń grę z listy")
    print("5. Wyjdź")

def main():
    manager = GameManager()

    while True:
        show_menu()
        choice = input("Co robimy? (1-5): ").strip()

        match choice:
            case "1":
                games = manager.get_games()
                if not games:
                    print("Twoja lista jest pusta. Czas w coś pograć!")
                else:
                    print("\nTwoje gry:")
                    for idx, game in enumerate(games):
                        print(f"{idx}. {game}")
            case "2":
                game_name = input("Wpisz tytuł gry: ").strip()
                if game_name:
                    manager.add_game(game_name)
                    print(f"Dodano '{game_name}' do listy!")
                else:
                    print("Tytuł nie może być pusty!")
            case "3":
                index = input("Podaj numer gry, którą ograłeś/chcesz cofnąć status: ").strip()
                if index.isdigit():
                    manager.toggle_game_status(int(index))
                    print("Status zmieniony.")
                else:
                    print("To nie jest prawidłowy numer.")
            case "4":
                index = input("Podaj numer gry do usunięcia: ").strip()
                if index.isdigit():
                    manager.remove_game(int(index))
                    print("Gra usunięta z listy.")
                else:
                    print("To nie jest prawidłowy numer.")
            case "5":
                print("No to idź grać!")
                break
            case _:
                print("Nie ma takiej opcji, wybierz 1-5.")

if __name__ == "__main__":
    main()

