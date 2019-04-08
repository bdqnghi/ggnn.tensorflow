    int main()
{
    int b;
	scanf("%d",&b);
	int a[100000];
	for(int i=0;i<b;i++)
	{
	    int m,n;
		scanf("%d %d",&m,&n);
                int sz[100][100];
		for(int k=0;k<m;k++)
		{
		    for(int p=0;p<n;p++)
			{
			    scanf("%d",&(sz[k][p]));
 			}
		}
                if(m*n!=1)
                {
		for(int o=0;o<n;o++)
		{
		    a[i]=a[i]+sz[0][o]+sz[m-1][o];
		}
		for(int q=0;q<m;q++)
		{
		    a[i]=a[i]+sz[q][0]+sz[q][n-1];
		}
		a[i]=a[i]-sz[0][0]-sz[m-1][0]-sz[m-1][n-1]-sz[0][n-1];
		printf("%d\n",a[i]);
	        }
                else{printf("%d",sz[0][0]);}
        }
   
	return 0;
}