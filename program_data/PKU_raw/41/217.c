int main()
{
	int first, second;
	int a[6], b[6],c[6] = {0,0,0,0,0,0};//c?????1,2??
	int m,c1;
	for (a[1] = 1; a[1] <= 5; a[1]++)
		for (a[2] = 1; a[2]<= 5; a[2]++)
			for (a[3] = 1; a[3] <= 5; a[3]++)
				for (a[4] = 1; a[4] <= 5; a[4]++)
				{
					a[5] = 15 - a[1] - a[2] - a[3] - a[4];
					if (a[1] * a[2] * a[3] * a[4]* a[5] == 120)
					{
						for (int i = 1, c1 = 1; i <= 5; i++)
							if (a[i] == 1)
								first = i;
							else if(a[i] == 2)
								second = i;
							else 
							{
								c[c1] = i;
								c1++;
							}
						b[1] = (a[5] == 1);
						b[2] = (a[2] == 2);
						b[3] = (a[1] == 5);
						b[4] = (a[3] != 1);
						b[5] = (a[4] == 1);
						m = b[c[1]] + b[c[2]] + b[c[3]] ;
						if (a[1] == 5 && a[2] == 2 && a[3] == 3)
							cin >> c[6];
						if (b[first] == 1 && b[second] == 1 && m == 0 && a[5] != 2 && a[5] != 3)
						{
							cout << a[1];
							for (int k = 2; k <= 5; k++)
								cout << " " <<a[k];
							return 0;
						}
					}
				}
}