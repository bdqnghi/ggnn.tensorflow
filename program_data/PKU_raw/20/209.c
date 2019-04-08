int main()
{
	char a[100][15]={0},d[100][15]={0};
	int i=0,j,n,k=0,cutpoint;
	while (1)
	{   char b[20]={0},c[10]={0},e[4]={0},max;
    
	gets(a[k]);
	
		n=strlen(a[k]);
		for (i=0;i<3;i++)
		{
			e[i]=a[k][n-3+i];
		}
		

		if (a[k][0]==0)
			break;
				max=a[k][0];
		for(i=0;i<n-4;i++)
		{

			
			if(a[k][i]>max)
			{
				max=a[k][i];
	            cutpoint=i;
			}
		}
		for (i=0;i<=cutpoint;i++)
		{
			b[i]=a[k][i];
		}
		for (i=0,j=cutpoint+1;j<n-4;i++,j++)
		{
			c[i]=a[k][j];
		}
		strcat(b,e);
		strcat(b,c);
		strcpy(d[k],b);
     	k++;
	}

	for (i=0;i<k;i++)
		puts(d[i]);	
	return 0;
}

	

