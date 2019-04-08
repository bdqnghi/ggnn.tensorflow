/***************************************************************************
*autour:??? 
*number:1000012905
*description:???? 
****************************************************************************/
//hui ???????????????
int	hui(char a[], int n)
{
	int	k = (int) (n / 2);
	int	i;
	//?????? 
	for (i = 0; i <= k; i ++)
	{
		if(a[i] != a[n - 1 - i])
		{break;}
	}
	
	//?? 
	if(i == k + 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	//?????????? 
	char 	str[500];
	int	sl = 0;
	cin.getline(str, 501);
	sl = strlen(str);

	int	i, j, k;
	char	jian[500];	//??????????
	int	jl = 0;		//?????? 
	for (i = 2; i <= sl; i ++)
	{
		for (j = 0; j <= sl - i; j ++)
		{
			//??????j???????i??? 
			for (k = j; k < j + i; k ++)
			{
				jian[k - j] = str[k];
			}
			jl = i;
			
			//?????????,????? 
			if(hui(jian, jl)) 
			{
				int	t;
				for (t = 0; t < jl; t ++)
				{
					cout << jian[t]; 
				}
				cout << endl;
			}
		}
	}
	return 0;
} 
