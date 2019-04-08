int swap(int a[5][5],int n,int m)
{
	int i,t[5]={0};
	if((n<=4 && n>=0) && (m<=4 && m>=0))
	 {
		for(i=0;i<5;i++)
		{
			t[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t[i];
		}
		return 1;
	 }
	else
	{
	 return 0;
	}
}
int main()
{
     int a[5][5],n,m;
	 int i,j;
	 for(i=0;i<5;i++)
	 {
		 for(j=0;j<5;j++)
			 scanf("%d",&a[i][j]);
	 }
	 scanf("%d %d",&n,&m);
     if(swap(a,n,m)==1)
	 {
		 for(i=0;i<5;i++)
		 {
			 for(j=0;j<4;j++)
				 printf("%d ",a[i][j]);
			 printf("%d",a[i][4]);
			 printf("\n");
         }
	 }
	 else
	 {
		 printf("error\n");
	 }
	 return 0;
}
