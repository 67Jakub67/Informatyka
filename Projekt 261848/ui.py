from PyQt6.QtWidgets import QWidget, QVBoxLayout, QPushButton, QListWidget, QLineEdit, QMessageBox
from logic import GameManager

class GameManagerUI(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Menedżer Moich Gier 🎮")
        self.setGeometry(100, 100, 450, 350)

        self.game_manager = GameManager()

        self.layout = QVBoxLayout()

        self.game_list = QListWidget()
        self.layout.addWidget(self.game_list)

        self.game_input = QLineEdit()
        self.game_input.setPlaceholderText("Wpisz tytuł gry (np. Wiedźmin 3)...")
        self.layout.addWidget(self.game_input)


        self.add_button = QPushButton("Dodaj grę do listy")
        self.add_button.clicked.connect(self.add_game)
        self.layout.addWidget(self.add_button)

        self.toggle_button = QPushButton("Zmień status (Do ogrania / Ograne)")
        self.toggle_button.clicked.connect(self.toggle_game)
        self.layout.addWidget(self.toggle_button)

        self.remove_button = QPushButton("Usuń grę z listy")
        self.remove_button.clicked.connect(self.remove_game)
        self.layout.addWidget(self.remove_button)

        self.setLayout(self.layout)
        self.update_game_list()

    def add_game(self):
        game_name = self.game_input.text().strip()
        if game_name:
            self.game_manager.add_game(game_name)
            self.game_input.clear()
            self.update_game_list()
        else:
            QMessageBox.warning(self, "Błąd", "Wpisz chociaż tytuł gry!")

    def remove_game(self):
        selected = self.game_list.currentRow()
        if selected >= 0:
            self.game_manager.remove_game(selected)
            self.update_game_list()
        else:
            QMessageBox.warning(self, "Błąd", "Zaznacz najpierw grę, którą chcesz usunąć z listy.")

    def toggle_game(self):
        selected = self.game_list.currentRow()
        if selected >= 0:
            self.game_manager.toggle_game_status(selected)
            self.update_game_list()
        else:
            QMessageBox.warning(self, "Błąd", "Zaznacz grę, której status chcesz zmienić!")

    def update_game_list(self):
        self.game_list.clear()
        self.game_list.addItems(self.game_manager.get_games())