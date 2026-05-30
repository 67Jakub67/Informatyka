def to_lower(text):
    return text.lower()


def to_upper(text):
    return text.upper()


def text_size(text):
    return len(text)


def main():
    text = "Jedna idzie PYK PYK"
    print(text)

    text = to_lower(text)
    print(text)

    text = to_upper(text)
    print(text)

    print(text_size(text))


if __name__ == "__main__":
    main()










# N = 10
#
# def read_array(n):
#     arr = []
#     for k in range(n):
#         val = int(input(f"Podaj liczbe [{k}]: "))
#         arr.append(val)
#     return arr
#
#
# def show_array(arr):
#     for k, val in enumerate(arr):
#         print(f"arr[{k}] = {val}")
#
#
# def get_min(arr):
#     lowest = arr[0]
#     for val in arr:
#         if val < lowest:
#             lowest = val
#     return lowest
#
#
# def get_max(arr):
#     highest = arr[0]
#     for val in arr:
#         if val > highest:
#             highest = val
#     return highest
#
#
# def get_mean(arr):
#     total = sum(arr)
#     return total / len(arr)
#
#
# def get_median(arr):
#     sorted_arr = sorted(arr)
#     n = len(sorted_arr)
#
#     med = (sorted_arr[n // 2 - 1] + sorted_arr[n // 2]) / 2.0
#     return med
#
#
# def main():
#     print("--- Tablice ---")
#     arr = [0] * N
#     choice = -1
#
#     while choice != 0:
#         print("\nMENU:")
#         print("1. Wprowadz dane do tablicy")
#         print("2. Wyswietl tablice")
#         print("3. Oblicz wartosc minimalna")
#         print("4. Oblicz wartosc maksymalna")
#         print("5. Oblicz wartosc srednia")
#         print("6. Oblicz mediane")
#         print("0. Wyjdz z programu")
#
#         try:
#             choice = int(input("Wybor: "))
#         except ValueError:
#             print("Niepoprawny wybor. Podaj liczbe całkowitą.")
#             continue
#
#         if choice == 1:
#             print(f"Wprowadz {N} liczb do tablicy:")
#             arr = read_array(N)
#         elif choice == 2:
#             show_array(arr)
#         elif choice == 3:
#             print(f"min = {get_min(arr)}")
#         elif choice == 4:
#             print(f"max = {get_max(arr)}")
#         elif choice == 5:
#             print(f"average = {get_mean(arr):.2f}")
#         elif choice == 6:
#             print(f"median = {get_median(arr):.2f}")
#         elif choice == 0:
#             pass
#         else:
#             print("Niepoprawny wybor. Sprobuj ponownie.")
#
#
# if __name__ == "__main__":
#     main()


