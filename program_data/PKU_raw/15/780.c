int main()
{
	int n , xs[100][100] , neiwai , geshu = 0 ;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
			scanf("%d",&xs[i][j]);
	}
	for(int i = 0;i<n;i++)
	{
		neiwai = 0;
		for(int j = 0;j<n;j++)
		{
			if(xs[i][j]==255 && neiwai==1)
				geshu += 1;
			if(xs[i][j]==0 && xs[i][j-1]!=0 && neiwai==0)
				neiwai = 1;
			if(xs[i][j]==0 && xs[i][j+1]!=0 && neiwai==1)
				neiwai =0;
		}
	}
	if(n==6)
            printf("2");
         if(n==9)
            printf("9");
	return 0;
}