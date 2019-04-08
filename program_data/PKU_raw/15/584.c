int s[1000][1000];
int main()
{
//printf("bbb\n");
	int a=1,b=1,j,i,n,m,first=0;
	int c=0,d=0;
	scanf("%d",&n);
//printf("bbb%d\n",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&s[i][j]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i][j]==0)
			{
				a=i;
				b=j;
                                    first=1;
                                    break;
			}
		}

		if(first==1)	
                  {           	
	    	   break;
                  }
	}
		for(j=b;j<n;j++)
		{
	    	c++;
			if(s[a][j]==255)
		    	break;
		}

		for(i=a;i<n;i++)
		{
                         d++;
	    	       if(s[i][b]==255)
		    	break;
		} 

	m=(c-3)*(d-3);
	printf("%d",m);
	return 0;
}

