#include<iostream>
#include<iomanip>
using namespace std;
void print(char s[10][16])
{
	cout << "\n\n\n\n";
	for (int i = 0; i < 10; ++i)
	{

		cout << setw(25);
		for (int j = 0; j < 16; ++j)
		{

			cout << s[i][j];
		}
		cout << endl;
	}
}

//000000000000000000000
void zero(char x[10][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}


	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}


	for (int i = 1; i < 8; ++i)

	{
	x[i][2] = '0';
	x[i][5] = '0';
	}

	for (int i = 2; i < 6; ++i)
	{
		x[1][i] = '0';
		x[7][i] = '0';
	
	}










}

//111111111111111111111
void one(char x[10][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}


	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}


	for (int i = 2; i < 8; ++i)
	{
		x[i][4] = '1';
	}
	for (int i = 3, j = 2; i >= 0, j <= 3; ++j, --i)
	{
		x[i][j] = '1';
	}
}


//22222222222222222222222222


void two(char x[10][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}


	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}

	for (int i = 3; i < 7; ++i)
	{
		x[2][i] = '2';
		x[7][i] = '2';
	}
	for (int i = 3; i < 7; ++i)
	{
		x[i][6] = '2';
	}
	for (int i = 5; i < 7; ++i)
		x[i][3] = '2';

	for (int i = 4; i < 9; ++i)
		x[5][i] = '2';

	x[3][3] = '2';
}




//33333333333333333333333333

void three(char x[10][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}


	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}

	for (int i = 3; i < 7; ++i)
	{
		x[2][i] = '3';
		x[7][i] = '3';
	}
	for (int i = 3; i <= 6; ++i)
		x[i][6] = '3';

	x[4][3] = '3';
	x[4][4] = '3';
	x[4][5] = '3';


}

//44444444444444444444444
void four(char x[10][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}

	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}



	for (int i = 0; i < n - 3; ++i)
	{
		x[i + 1][5] = '4';
	}

	for (int i = 2; i < 7; ++i)
		x[5][i] = '4';


	for (int i = 1, j = 5; i < 5, j> 0; ++i, --j)
		x[i][j] = '4';

	x[5][1] = '4';
}







//55555555555555555555
void five(char x[][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}

	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}

	for (int i = 2; i < 4; ++i)
		x[i][3] = '5';

	for (int i = 3; i < 7; ++i)
	{
		x[1][i] = '5';
		x[4][i] = '5';
	}

	for (int i = 4; i < 7; ++i)
		x[i][6] = '5';

	for (int i = 3; i < 7; ++i)
		x[7][i] = '5';



}



//66666666666666666666
void six(char x[][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}

	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}

	for (int i = 2; i < 8; ++i)
		x[i][2] = '6';

	for (int i = 2; i < 6; ++i)
	{
		x[2][i] = '6';
		x[5][i] = '6';
	}



	for (int i = 3; i < 7; ++i)
		x[7][i] = '6';

	for (int i = 5; i < 7; ++i)
		x[i][6] = '6';

}


//7777777777777777777777
void seven(char x[][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}


	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}


	for (int i = 1; i < 9; ++i)
		x[i][6] = '7';
	x[2][5] = '7';
	x[3][4] = '7';

	for (int i = 4; i < 9; ++i)
		x[6][i] = '7';


}







//88888888888888888888888
void nine(char x[10][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}


	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}










	for (int i = 2; i < 8; ++i)
		x[i][2] = '8';

	for (int i = 2; i < 6; ++i)
	{
		x[1][i] = '8';
		x[4][i] = '8';
	}

	for (int i = 1; i < 8; ++i)
		x[i][6] = '8';

	for (int i = 2; i < 6; ++i)
		x[7][i] = '8';
















}

//9999999999999999999999
void teen(char x[10][16], int c)
{
	int n = 10, m = 16;


	for (int i = 0; i < m; ++i)
	{
		x[0][i] = '*';
		x[n - 1][i] = '*';
	}

	for (int j = 0; j < n; ++j)
	{
		x[j][0] = '*';
		x[j][m - 1] = '*';
	}


	for (int i = 2; i < 5; ++i)
		x[i][2] = '9';

	for (int i = 2; i < 6; ++i)
	{
		x[1][i] = '9';
		x[4][i] = '9';
	}

	for (int i = 1; i < 8; ++i)
		x[i][6] = '9';

	for (int i = 2; i < 6; ++i)
		x[7][i] = '9';




}

int main()
{
	char x[10][16];
	char y[10][16];
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 16; ++j)
		{
			x[i][j] = 219;
		}
	}



	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 16; ++j)
		{
			y[i][j] = 219;
		}
	}
	int c;
	int count = 0;
	cout << "cin value "; cin >> c;

	int temp = c;
	int arr[2];
	while (temp != 0)
	{
		arr[count] = temp % 10;
		++count;
		temp /= 10;

	}
	if (c == 0) { zero(x, 0);}

	if (count == 1)
	{
		switch (c)
		{
		case 1:
			one(x, c);
			break;

		case 2:
			two(x, c);
			break;

		case 3:
			three(x, c);
			break;

		case 4:
			four(x, c);
			break;
		case 5:
			five(x, c);
			break;
		case 6:
			six(x, c);
			break;
		case 7:
			seven(x, c);
			break;

		case 8:
			nine(x, c);
			break;

		case 9:
			teen(x, c);
			break;

		default:
			break;
		}
		print(x);
	}
	else {
		switch (arr[1])
		{
		case 1:
			one(x, 1);
			break;

		case 2:
			two(x, 2);
			break;

		case 3:
			three(x, 3);
			break;

		case 4:
			four(x, 4);
			break;
		case 5:
			five(x,5);
			break;
		case 6:
			six(x, 6);
			break;
		case 7:
			seven(x, 7);
			break;

		case 8:
			nine(x, 8);
			break;

		case 9:
			teen(x,9);
			break;

		default:
			break;
		}
	//	print(x);












		switch (arr[0])
		{
		case 0:
			zero(y,0);
			break;
		case 1:
			one(y, 1);
			break;

		case 2:
			two(y, 2);
			break;

		case 3:
			three(y, 3);
			break;

		case 4:
			four(y, 4);
			break;
		case 5:
			five(y, 5);
			break;
		case 6:
			six(y, 6);
			break;
		case 7:
			seven(y, 7);
			break;

		case 8:
			nine(y, 8);
			break;

		case 9:
			teen(y, 9);
			break;

		default:
			break;
		}
	//	print(y);



		char new_matrix[10][16];

		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 16; ++j)
			{
				new_matrix[i][j] = x[i][j];
			}
		}



		int c = 1;
		for (int i = 1; i < 9; ++i)
		{
			for (int j = 8,c=1; j < 15; ++j,++c)
			{
				new_matrix[i][j] = y[i][c];
			}
		}



		print(new_matrix);
	}




















}