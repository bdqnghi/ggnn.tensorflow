void main ()
{
	int f(int s[5][5],int x,int y);
	int a[5][5],m,n,i,j,t;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			scanf ("%d",&a[i][j]);
		scanf ("%d %d",&m,&n);
		t=f(a,m,n);
		if (t==0)
			printf("error\n");
		if (t==1)
			for (i=0;i<5;i++)
			{
				for (j=0;j<4;j++)
					printf("%d ",a[i][j]); 
				printf("%d",a[i][4]);
				printf("\n");
			}
}
 int f(int s[5][5],int x,int y)
 {
	 int term,i;
	 if (x>4||y>4)return 0;
	 else
	 {
		 for (i=0;i<5;i++)
		 {
			 term=s[x][i];
		     s[x][i]=s[y][i];
		     s[y][i]=term;
		 }
	 } return 1;
 }

