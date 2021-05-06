#include <iostream>
using namespace std;
struct TictactoeField
{
	unsigned short field_size;
	unsigned short number_of_cells;
	bool X_or_0;
	bool turn;
	char game_progress [10];
	char game_result [10];
};
int main()
{
	setlocale(LC_ALL, "Russian");
	TictactoeField v1 = { 45, 9, true, true, "Не начата" };
	TictactoeField v2 = { 36, 9, false, true, "Начата" };
	TictactoeField v3 = { 27, 9, true, true, "Завершена", "Победа" };
	TictactoeField v4 = { 18, 9, false, true, "Завершена", "Поражение" };
	TictactoeField v5 = { 9, 9, false , false, "Завершена", "Ничья" };
	cout << "Размер поля " << v1.field_size << ", количество клеток " << v1.number_of_cells;
	if (v1.X_or_0 == true)
		cout << ", первый игрок использует X";
	else
		cout << ", первый игрок использует Y";
	if (v1.X_or_0 == true || v1.X_or_0 == false && v1.turn == true)
		cout << ", первым ходит X.";
	else
		cout << ", первым ходит Y.";
	cout << " Игра - " << v1.game_progress << ", результат - " << v1.game_result << endl;
	cout << "Размер поля " << v2.field_size << ", количество клеток " << v2.number_of_cells;
	if (v2.X_or_0 == true)
		cout << ", первый игрок использует X";
	else
		cout << ", первый игрок использует Y";
	if (v2.X_or_0 == true || v2.X_or_0 == false && v2.turn == true)
		cout << ", первым ходит X.";
	else
		cout << ", первым ходит Y.";
	cout << " Игра - " << v2.game_progress << ", результат - " << v2.game_result << endl;
	cout << "Размер поля " << v3.field_size << ", количество клеток " << v3.number_of_cells;
	if (v3.X_or_0 == true)
		cout << ", первый игрок использует X";
	else
		cout << ", первый игрок использует Y";
	if (v3.X_or_0 == true || v3.X_or_0 == false && v3.turn == true)
		cout << ", первым ходит X.";
	else
		cout << ", первым ходит Y.";
	cout << " Игра - " << v3.game_progress << ", результат - " << v3.game_result << endl;
	cout << "Размер поля " << v4.field_size << ", количество клеток " << v4.number_of_cells;
	if (v4.X_or_0 == true)
		cout << ", первый игрок использует X";
	else
		cout << ", первый игрок использует Y";
	if (v4.X_or_0 == true || v4.X_or_0 == false && v4.turn == true)
		cout << ", первым ходит X.";
	else
		cout << ", первым ходит Y.";
	cout << " Игра - " << v4.game_progress << ", результат - " << v4.game_result << endl;
	cout << "Размер поля " << v5.field_size << ", количество клеток " << v5.number_of_cells;
	if (v5.X_or_0 == true)
		cout << ", первый игрок использует X";
	else
		cout << ", первый игрок использует Y";
	if (v5.X_or_0 == true || v5.X_or_0 == false && v5.turn == true)
		cout << ", первым ходит X.";
	else
		cout << ", первым ходит Y.";
	cout << " Игра - " << v5.game_progress << ", результат - " << v5.game_result << endl;
	return 0;
}