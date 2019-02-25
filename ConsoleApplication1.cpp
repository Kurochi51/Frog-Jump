#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int n, m, i, j, l, c, c1, c2, l1, l2, mini, t1, t2, dmin, d[4], k1, k2, d2[4], c3[4];
	mini = 9999;
	dmin = 9999;
	cout << "Introduceti numarul de linii si coloane ale matricii." << endl;
	//cin >> n >> m;
	n = 4;
	m = 5;
	int a[20][20];
	int b[20][20];
	cout << "Introduceti linia si coloana de pe care broscuta incepe." << endl;
	//cin >> l >> c;
	l = 2;
	c = 4;
	l = l - 1;
	c = c - 1;
	cout << "Introduceti elementele matricei." << endl;
	for (i = 0; i <= n - 1; i++)
		for (j = 0; j <= m - 1; j++)
			cin >> a[i][j];
	for (int i2 = 1; i2 <= 10; i2++)
	{
		c3[4] = { 0 };
		d2[4] = { 0 };
		mini = 9999;
		dmin = 9999;
		k1 = 0;
		if (l - 1 >= 0)
			l1 = l - 1;
		if (l + 1 <= n - 1)
			l2 = l + 1;
		if (c - 1 >= 0)
			c1 = c - 1;
		if (c + 1 <= m - 1)
			c2 = c + 1;
		d[0] = abs(abs(a[l][c]) - abs(a[l1][c]));
		d[1] = abs(abs(a[l][c]) - abs(a[l2][c]));
		d[2] = abs(abs(a[l][c]) - abs(a[l][c1]));
		d[3] = abs(abs(a[l][c]) - abs(a[l][c2]));
		for (i = 0; i <= 3; i++)
		{
			if (dmin > d[i] && i < 4)
			{
				dmin = d[i];
				k2 = i;
			}
		}
		d2[k2]++;
		for (i = 0; i <= 3; i++)
		{
			if (dmin == d[i] && i != k2)
			{
				d2[i]++;
			}
		}
		for (i = 0; i <= 3; i++)
		{
			if (d2[i] != 0)
			{
				switch (i)
				{
				case 0:
					c3[i] = a[l1][c];
					break;
				case 1:
					c3[i] = a[l2][c];
					break;
				case 2:
					c3[i] = a[l][c1];
					break;
				case 3:
					c3[i] = a[l][c2];
					break;
				}
			}
		}
		for (i = 0; i <= 3; i++)
		{
			if (c3[i] != 0 && mini > c3[i])
			{
				mini = c3[i];
				switch (i)
				{
				case 0:
					l = l1;
					break;
				case 1:
					l = l2;
					break;
				case 2:
					c = c1;
					break;
				case 3:
					c = c2;
					break;
				}
			}
		}
		cout << endl << mini << endl;
	}
}
