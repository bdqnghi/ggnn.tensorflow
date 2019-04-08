int main()
{
	int a[100][100],column[100]={0},i=0,l=0,j,n,m,s=0;
		for(l=0;l<=15;l++)
		{
		scanf("%d",&a[i][l]);
		if(a[i][l]==-1)break;
        else if(a[i][l]==0){i++;l=-1;}
		else column[i]++;
		}
		i--;
		for(m=0;m<=i;m++)
		{
			s=0;
			for(j=0;j<=column[m]-1;j++)
			  for(n=j+1;n<=column[m];n++)
			  if(a[m][j]*2==a[m][n]||a[m][n]*2==a[m][j])
					s=s+1;
				printf("%d\n",s);
		}
	return 0;
}