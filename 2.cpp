#include <iostream>
using namespace std;
enum Tictactoe
{
	TTT_O = '0',
	TTT_X = 'X',
	TTT_Empty = ' '
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Tictactoe symbol0(TTT_O);
	Tictactoe symbol1(TTT_X);
	Tictactoe symbol2(TTT_Empty);
	cout << "�������� ��� ���� � ��������-������: " << endl;
	cout << char(symbol0) << " - �����" << endl;
	cout << char(symbol1) << " - �������" << endl;
	cout << char(symbol2) << " - �������" << endl;
	return 0;
}