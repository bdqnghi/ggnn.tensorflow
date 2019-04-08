int main()
{
	int m,n,s[A][A]={0},t[A][A]={0},i,a,b;
	scanf ("%d%d",&m,&n);
	s[4][4]=m;
	t[4][4]=m;
 for (i=0;i<n;i++)
	{
		for (a=0;a<9;a++)
		{
			for (b=0;b<9;b++)
			{
			    if (s[a][b]!=0)
				{
                    
			        t[a-1][b]+=s[a][b];
                    t[a][b-1]+=s[a][b];
                    t[a+1][b]+=s[a][b];
                    t[a][b+1]+=s[a][b];
                    t[a+1][b-1]+=s[a][b];	
		            t[a+1][b+1]+=s[a][b];
		            t[a-1][b+1]+=s[a][b];
		            t[a-1][b-1]+=s[a][b];
					t[a][b]+=s[a][b];
				}
			}
		}
		for (a=0;a<9;a++)
		{
			for (b=0;b<9;b++)
			{
				s[a][b]=t[a][b];
			}
		}
	}
	for (a=0;a<9;a++)
	{
		for (b=0;b<8;b++)
		{
			printf ("%d ",s[a][b]);
	     	
		}
		printf("%d\n",s[a][8]);
	}

	return 0;
}