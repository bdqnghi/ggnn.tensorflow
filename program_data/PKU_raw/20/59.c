void main()
{
	char a[100][100],b[100][4],c[100][100],e;
	int  i,j,max,k,l;
	for(i=0;i<10;i++)
	{
		scanf("%s %s",a[i],b[i]);
		l=sizeof(a[i]);
	    max=a[i][0];
		for (j=1;j<10;j++)
		{  
		  if (a[i][j]>max)
			  max=a[i][j];
		}
		for(j=0;j<10;j++)
		{   
		
			c[i][j]=a[i][j];
			if (a[i][j]==max)break;
		}
		j++;
		for(k=j;k<j+3;k++)
		{
			c[i][k]=b[i][k-j];
		}
		for(k=j+3;k<3+l;k++)
		{
			c[i][k]=a[i][k-3];
		}
		printf("%s\n",c[i]);
                  if((e=getchar())==EOF)break;
	}
	
}
