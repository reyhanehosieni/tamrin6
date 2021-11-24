#include<iostream>
using namespace std;
int space[3][3] = { { '1','2','3' },{ '4','5','6' },{ '7','8','9' } };
int row;
int column;
char token = ' x';
bool tie;
string n1 = '';
string n2 = '';

void fone()
{

	cout << "      |     |       \n";
	cout << " " << space[0][0] << "  |  " << space[0][1] << "  |  " << space[1][1] << " \n";
	cout << "______|_____|_______\n";
	cout << "      |     |       \n";
	cout << " " << space[1][0] << "  |  " << space[1][1] << "  |  " << space[1][2] << "\n";
	cout << "______|_____|_______\n";
	cout << "      |     |       \n";
    cout << " " << space[2][0] << "  |  " << space[2][1] << "  |  " << space[2][2] << "\n";
	cout << "      |     |       \n";
}
void ftwo()
{

	int digit;
	if(token=='x')
	{
		cout << n1 << "pleas enter";
		cin >> digit;
	
	
	}
	if (token == '0')
	{
		cout << n2 << "pleas enter";
		cin >> digit;


	}
	if (digit == 0)
	{
		row = 0;
			column = 0;

	}
	if (digit == 1)
	{
		row = 0;
		column = 1;

	}
	if (digit == 2)
	{
		row = 0;
		column = 2;

	}
	if (digit == 3)
	{
		row = 1;
		column = 0;

	}
	if (digit == 4)
	{
		row = 1;
		column = 1;

	}
	if (digit == 5)
	{
		row = 1;
		column = 2;

	}
	if (digit == 6)
	{
		row = 2;
		column = 0;

	}
	if (digit == 7)
	{
		row = 2;
		column = 1;

	}
	if (digit == 8)
	{
		row = 2;
		column = 2;

	}
	else if (digit<1 || digit>9)
	{
		cout << "invalid";

	}
	if (token = 'x'&& space[row][column] != 'x' && space[row][column] != '0')
	{
		space[row][column] = 'x';
		token = '0';


	}
	else if (token = '0'&& space[row][column] != 'x' && space[row][column] != '0')
	{
		space[row][column] = '0';
		token = 'x';

	}
	else
	{
		cout << "there is no empty space";
		ftwo();
	}
	bool fthree()
	{
		for (int i = 0; i < 3; i++)
		{
			if (space[i][0] == space[i][1] && space[0][i] == space[1][i] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
			{
				return true;
			}
		}
		if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
		{
			return true;
			}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (space[i][j] != 'x'&&space[i][j] != '0')
				{
					return false;
				}
			}
		}
		
	}
	tie = true;
	return false;
}
int main()
{
	cout << "enter the name of first player: \n";
	cin >> n1;
	cout << "enter the name of second player: \n";
	cin >> n2;
	cout << n1 << "is player will play first\n";
	cout << n2 << "is player will play second\n";
	while (!fthree())
	{
		fone();
		ftwo();
		fthree();

	}
	if (token = 'x'&& tie ==false)
	{
		cout << n2 << "win";
	}
	elseif (token = '0'&& tie == false)
	{
		cout << n1 << "win";
	}
	else 
	{
		cout << "draw"; 
	}
}
