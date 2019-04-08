int gl(int a[][102],int k)
{
	int i,j;
	for(i=0;i<k;i++)
	{
		int min=999;
		for(j=0;j<k;j++)
		{
			if(a[i][j]<min)
				min=a[i][j];
		}
		for(j=0;j<k;j++)
		{
            a[i][j]=a[i][j]-min;
		}
	}
	for(i=0;i<k;i++)
	{
		int min=999;
		for(j=0;j<k;j++)
		{
			if(a[j][i]<min)
				min=a[j][i];
		}
        for(j=0;j<k;j++)
		{
            a[j][i]=a[j][i]-min;
		}
	}
    return(a[1][1]);
}
void xj(int a[][102],int k)
{
   int i,j;
   for(i=0;i<k;i++)
   {
	   for(j=2;j<k;j++)
	   {
		   a[i][j-1]=a[i][j];
	   }
   }
   for(i=0;i<k;i++)
   {
	   for(j=2;j<k;j++)
	   {
		   a[j-1][i]=a[j][i];
	   }
   }
}
int main()
{
    int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int j,l,sum=0,a[102][102];
		for(j=0;j<k;j++)
		{
			for(l=0;l<k;l++)
				scanf("%d",&a[j][l]);
		}
		for(j=0;j<k-1;j++)
		{
           int temp;
		   temp=gl(a,k-j);
		   //printf("%d\n",temp);
		   sum=sum+temp;
		   xj(a,k-j);
		}
        printf("%d\n",sum);
	}		
}