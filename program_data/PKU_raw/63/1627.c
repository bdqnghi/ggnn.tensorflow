//********************************
//*??????? **
//*??????  1200062706**
//*???2012.11.11  **
//********************************

int main()
{
	int a, b, j, k;
	float x[100][100];
	cin >> a >> b;
	for (j = 0; j < a; j++)
	{
		for (k = 0; k < b; k++)
		{
			float e;
			cin >>e;
			x[j][k] = e;            //????x???
		}
	}
	int a1, b1;
	float y[100][100];
	cin >> a1 >> b1;
	for (j = 0; j < a1; j++)
	{
		for (k = 0; k < b1; k++)
		{
			float e1;
			cin >> e1;
			y[j][k] = e1;         //????y???
		}
	}
	int i;
	int a2;
	int c[100][100] = {0};
	for (j = 0; j < a; j++)
	{
		for (k = 0; k < b1; k++)
		{
			a2 = 0;
			for(i = 0; i < b; i++)
			{
				a2 = a2 + x[j][i] * y[i][k]; 
				                  //??????c[J][K]??
			}
			c[j][k] = a2;         
		}
	}
	if (b1 == 1)
	{
		for(i = 0; i < a; i++)
			cout << c[i][0] << endl;
	}
	else
	{
	    for (j = 0; j < a; j++)
		{
		    for (k = 0; k < b1; k++)
			{	
                if (k == 0)
				    cout << c[j][k];
			    else if (k == b1 - 1)
				    cout << " " << c[j][k] << endl;
			    else
				    cout << " " << c[j][k];
			}
		}
	}

	return 0;
}
