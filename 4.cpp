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
	TictactoeField v1 = { 45, 9, true, true, "�� ������" };
	TictactoeField v2 = { 36, 9, false, true, "������" };
	TictactoeField v3 = { 27, 9, true, true, "���������", "������" };
	TictactoeField v4 = { 18, 9, false, true, "���������", "���������" };
	TictactoeField v5 = { 9, 9, false , false, "���������", "�����" };
	cout << "������ ���� " << v1.field_size << ", ���������� ������ " << v1.number_of_cells;
	if (v1.X_or_0 == true)
		cout << ", ������ ����� ���������� X";
	else
		cout << ", ������ ����� ���������� Y";
	if (v1.X_or_0 == true || v1.X_or_0 == false && v1.turn == true)
		cout << ", ������ ����� X.";
	else
		cout << ", ������ ����� Y.";
	cout << " ���� - " << v1.game_progress << ", ��������� - " << v1.game_result << endl;
	cout << "������ ���� " << v2.field_size << ", ���������� ������ " << v2.number_of_cells;
	if (v2.X_or_0 == true)
		cout << ", ������ ����� ���������� X";
	else
		cout << ", ������ ����� ���������� Y";
	if (v2.X_or_0 == true || v2.X_or_0 == false && v2.turn == true)
		cout << ", ������ ����� X.";
	else
		cout << ", ������ ����� Y.";
	cout << " ���� - " << v2.game_progress << ", ��������� - " << v2.game_result << endl;
	cout << "������ ���� " << v3.field_size << ", ���������� ������ " << v3.number_of_cells;
	if (v3.X_or_0 == true)
		cout << ", ������ ����� ���������� X";
	else
		cout << ", ������ ����� ���������� Y";
	if (v3.X_or_0 == true || v3.X_or_0 == false && v3.turn == true)
		cout << ", ������ ����� X.";
	else
		cout << ", ������ ����� Y.";
	cout << " ���� - " << v3.game_progress << ", ��������� - " << v3.game_result << endl;
	cout << "������ ���� " << v4.field_size << ", ���������� ������ " << v4.number_of_cells;
	if (v4.X_or_0 == true)
		cout << ", ������ ����� ���������� X";
	else
		cout << ", ������ ����� ���������� Y";
	if (v4.X_or_0 == true || v4.X_or_0 == false && v4.turn == true)
		cout << ", ������ ����� X.";
	else
		cout << ", ������ ����� Y.";
	cout << " ���� - " << v4.game_progress << ", ��������� - " << v4.game_result << endl;
	cout << "������ ���� " << v5.field_size << ", ���������� ������ " << v5.number_of_cells;
	if (v5.X_or_0 == true)
		cout << ", ������ ����� ���������� X";
	else
		cout << ", ������ ����� ���������� Y";
	if (v5.X_or_0 == true || v5.X_or_0 == false && v5.turn == true)
		cout << ", ������ ����� X.";
	else
		cout << ", ������ ����� Y.";
	cout << " ���� - " << v5.game_progress << ", ��������� - " << v5.game_result << endl;
	return 0;
}