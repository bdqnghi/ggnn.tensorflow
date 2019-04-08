
int main()
{
	int num[11][11][11]={0};
	int days,pi,pj,n,m,i,j,k,a,b;
	scanf("%d%d",&m,&days);
	num[5][5][1]=m;
	for(n=2;n<=days+1;n++)
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				if(num[i][j][n-1]>0) 

				{b=num[i][j][n-1];
	num[i][j][n]=num[i][j][n]+b;
	for(pi=1;pi<=3;pi++)
		for(pj=1;pj<=3;pj++)			
			num[i-2+pi][j-2+pj][n]=num[i-2+pi][j-2+pj][n]+b;
				}
					
					
					
		for(i=1;i<=9;i++)
		{
		for(j=1;j<=8;j++)
			printf("%d ",num[i][j][days+1]);
		printf("%d\n",num[i][9][days+1]);}
								

}
