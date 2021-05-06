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
	const int nRow = 3;
	const int nCol = 3;
	Tictactoe TTT[nRow][nCol] =
	{
		{ TTT_X, TTT_Empty, TTT_O },
		{ TTT_O, TTT_X, TTT_Empty },
		{ TTT_X, TTT_O, TTT_X }
	};
	for (int i = 0; i < nRow; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			cout << char(TTT[i][j]) << "\t";
		}
		cout << endl;
	}
	return 0;
}