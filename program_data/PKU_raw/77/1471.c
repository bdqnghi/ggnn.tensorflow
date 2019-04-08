//********************************
//*???? 
//********************************


char a[110];
int a1[110] = {0};
int l;
char b,g;

void fi(int i)
{
	int j,k;
	for (j = i + 1; j < l; j++)
	{
		if (a[j] == g)
		{
			if (!a1[j])
			{
				for (k = j - 1; k >= 0; k--)
				{
					if((a[k] == b) && (!a1[k]))
					{
						cout << k << " " << j << endl;
						a1[k] = 1;
						a1[j] = 1;
						break;
					}
				}
			}
		}
	}
	return;
}

int main()
{
	int i;
	cin.getline(a,110);
	l = strlen(a);
	b = a[0];
	for (i = 0; i < l; i++)
	{
		if (a[i] != b)
		{
			g = a[i];
			break;
		}
	}
	fi(-1);
	cin.get();
    cin.get(); //????
	return 0;
}