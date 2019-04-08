int f(int a[5][5], int m, int n)
{
	if (m>=0&&m<=4&&n>=0&&n<=4)
		return(1);
	else return (0);
}
void main()
{
	int a[5][5],m,n,i,j,p;
	for (i=0;i<5;i++)
	  for (j=0;j<5;j++)
		  scanf("%d", &a[i][j]);
	  scanf("%d %d",&m,&n);
	  p=f (a[5][5],m,n);
	  if (p==0) printf("error");
	  if (p==1) 
	  {
		  for (i=0;i<5;i++)
		  {
			  int t;
			  t=a[m][i];
			  a[m][i]=a[n][i];
			  a[n][i]=t;
		  }
	      for (i=0;i<5;i++)
		  {
	         for (j=0;j<4;j++)
				 printf("%d ",a[i][j]);
			 printf("%d", a[i][4]);
			 printf("\n");
		  }
	  }
}
