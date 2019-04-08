int main()
{
	int n,i,j,l,m,m1,k,k1;
	cin >> n;
	for (i=6;i<=n;i++)
	{
		if ((i%2)==0)
		{
			for (j=2;j<=i/2;j++)
			{
				k=(int)sqrt((double)j);
				if ((j%2)!=0)
				{
					for (m = 3 ; m <= k ; m+=2)        //????
					{		
						if ((j%m)==0)  break;         //???????       
					}
					if (m>k) 
					{
						l=i-j;
						k1=(int)sqrt((double)l);
						if ((l%2)!=0)
						{
							for (m1 = 3 ; m1 <= k1 ; m1+=2)        //????
							{		
								if ((l%m1)==0)  break;         //???????       
							}
							if (m1>k1)
							{
								cout << i << "=" << j << "+" << l << endl;
								break;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
