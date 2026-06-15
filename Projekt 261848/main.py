from PyQt6.QtWidgets import QApplication
from ui import GameManagerUI
import sys

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = GameManagerUI()
    window.show()
    sys.exit(app.exec())
    