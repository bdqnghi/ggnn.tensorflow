int main(int argc, char* argv[])
{
	int s[9][9],b[9][9];
	int m,n,i,t,q,a,x,y;
	scanf("%d%d",&m,&n);
	for(i=0;i<9;i++)
	{
		for(t=0;t<9;t++)
		{
			s[i][t]=0;b[i][t]=0;
		}
	}
	s[4][4]=1;
    for(q=0;q<n;q++)
	{
		for(i=0;i<9;i++)
		{
			for(t=0;t<9;t++)
			{
				if(s[i][t]>0) 
				{
					a=s[i][t];
				    for(x=i-1;x<=i+1;x++)
					{
					    for(y=t-1;y<=t+1;y++)
						{
						b[x][y]+=a;
						}
					}
				    b[i][t]+=a;
				}
			}
		}
	    for(i=0;i<9;i++)
		{
		   for(t=0;t<9;t++)
		   {
			   s[i][t]=b[i][t];b[i][t]=0;
		   }
		}
	}
	for(i=0;i<9;i++)
	{
		for(t=0;t<9;t++)
		{
            if(t==0)printf("%d",s[i][t]*m);
				else printf(" %d",s[i][t]*m);
		}
		printf("\n");
	}
	return 0;
}
