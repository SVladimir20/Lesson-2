#include <iostream>
using namespace std;
union Bank
{
	int id;
	float cash;
	char term;
};
struct Flag
{
	Bank b;
	bool f_id : 1; 
	bool f_cash : 1;
	bool f_name : 1;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Flag F;
	cout << "������� ����� �� 1 �� 100 (������� ������ ����� ��� �������� ����������): " << endl;
	cin >> F.b.id;
	if (F.b.id >= 1 && F.b.id <= 100)
	{
		F.f_id = true;
		F.f_cash = false;
		F.f_name = false;
		cout << boolalpha << "������ � int - " << F.f_id << ", ������ � float - " << F.f_cash
			<< ", ������ � char - " << F.f_name << endl;
	}
	else
	{
		cout << "������� ����� �� 2000 �� 60000 (������� ������ ����� ��� �������� ����������): " << endl;
		cin >> F.b.cash;
		if (F.b.cash >= 2000 && F.b.cash <= 60000)
		{
			F.f_id = false;
			F.f_cash = true;
			F.f_name = false;
			cout << boolalpha << "������ � int - " << F.f_id << ", ������ � float - " << F.f_cash
				<< ", ������ � char - " << F.f_name << endl;
		}
		else
		{
			cout << "������� ���� ���������: " << endl;
			cin >> F.b.term;
				F.f_id = false;
				F.f_cash = false;
				F.f_name = true;
				cout << boolalpha << "������ � int - " << F.f_id << ", ������ � float - " << F.f_cash
					<< ", ������ � char - " << F.f_name << endl;
		}
		
	}
	return 0;
}