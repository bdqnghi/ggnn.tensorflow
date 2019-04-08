int main ()
{
	int m,n,i,j,g,h,k,l;
	int a[100][100];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	    g=0;
		j=0;
		h=0;
		l=0;
	for(i=0;i<m;i++)
	{
		
		for(j=i;j<n-i;j++)
		{
        if(l==m*n)
		{break;}
			
		
		    printf("%d\n",a[i][j]);
			l++;
       if(l==m*n)
		{break;}
			
	}
		j=n-i-1;
		for(g=i+1;g<m-i;g++)
		{
        if(l==m*n)
		{break;}
			
		
			printf("%d\n",a[g][j]);
			l++;
        if(l==m*n)
		{break;}

		}
		k=m-i-1;
		for(j=n-i-2;j>=i;j--)
		{
        if(l==m*n)
		{break;}
			
		
			
			printf("%d\n",a[k][j]);
			l++;
       if(l==m*n)
		{break;}
	
		}
		for(h=m-i-2;h>i;h--)
		{
        if(l==m*n)
		{break;}
			
		
			
			printf("%d\n",a[h][i]);
			l++;
       if(l==m*n)
		{break;}
		
		
		}
		if(l==m*n)
		{break;}
		


	}
	return 0;
}