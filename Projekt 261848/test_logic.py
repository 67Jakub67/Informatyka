import pytest
import os
from logic import GameManager


@pytest.fixture
def manager():
    test_file = "test_games.json"

    if os.path.exists(test_file):
        os.remove(test_file)

    manager_instance = GameManager(filename=test_file)

    yield manager_instance

    if os.path.exists(test_file):
        os.remove(test_file)


def test_add_game(manager):
    manager.add_game("Cyberpunk 2077")
    games = manager.get_games()
    assert games == ["[🎮 W toku] Cyberpunk 2077"]


def test_toggle_game_status(manager):
    manager.add_game("Gothic")
    manager.toggle_game_status(0)
    assert manager.get_games() == ["[🏆 Ograne] Gothic"]
    manager.toggle_game_status(0)
    assert manager.get_games() == ["[🎮 W toku] Gothic"]


def test_remove_game(manager):
    manager.add_game("Wiedźmin 3")
    manager.add_game("FIFA")
    manager.remove_game(0)
    assert manager.get_games() == ["[🎮 W toku] FIFA"]


def test_remove_game_invalid_index(manager):
    manager.add_game("Wiedźmin 3")
    manager.remove_game(99) 
    assert manager.get_games() == ["[🎮 W toku] Wiedźmin 3"]