int panduan(int n,int m)
{
	int y;
	

	

		if(n>=0&&n<=4&&m>=0&&m<=4)
		
			y=1;
        
		

		else y=0;
		return y;
		

}
     
void main()
{
	int puanduan(int n,int m);
	int y,i,j,a[5][5]={0},b[5][5]={0},c[5]={0};
	int m,n;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
		scanf("%d %d",&n,&m);
		
	y=panduan(n,m);
	if(y==1)
	{for(i=0;i<5;i++)
		{
			c[i]=a[n][i];
			b[n][i]=a[m][i];
			b[m][i]=a[n][i];
		}
	  for(i=0;i<5;i++)
		  printf("%d %d %d %d %d\n",b[i][0],b[i][1],b[i][2],b[i][3],b[i][4]);

	}
	
    
	else 
		printf("error");
}
			

