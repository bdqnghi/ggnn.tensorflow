int main()
{
	int		person[3];
	int		fan[3];
	int		hua[3];	
	int	i, j, k;
	
	for (i = 0; i < 3; i ++)
	{
		for (j = 0; j < 3; j ++)
		{
			if(j == i){continue;}
			for (k = 0; k < 3; k ++)
			{
				if((k == j) || (k == i)){continue;}
				
				person[0] = i;		//?0??????i
				person[1] = j;
				person[2] = k;
				fan[person[0]] = 0;	//???i???0??
				fan[person[1]] = 1;
				fan[person[2]] = 2;

				hua[0] = (person[1] > person[0]) + (person[2] == person[0]);
				hua[1] = (person[0] > person[1]) + (person[0] > person[2]);
				hua[2] = (person[2] > person[1]) + (person[1] > person[0]);
				
				int	p;
				for (p = 0; p < 3; p ++)
				{
					if(person[p] + hua[p] != 2)
					{
						break;
					}
				}
				
				
				if(p == 3)
				{
					int	t;
					for (t = 0; t < 3; t ++)
					{
						cout << (char)('A' + fan[t]);
					}
				}
			
			}
		}
	}

return 0;
}