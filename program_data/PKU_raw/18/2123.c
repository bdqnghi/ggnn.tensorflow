int hang(int a[],int n,int h)
{
	int m=a[0];
	for(int i=h;i<n;i++)
		if(a[i]<m)m=a[i];
	return(m);}
int lie(int a[][110],int n,int j,int h)
{
	int m=a[0][j];
	for(int i=h;i<n;i++)
		if(a[i][j]<m)m=a[i][j];
	return(m);
}
int main()
{
	int n,k;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		int i,j,h,s=0,hm,lm,a[110][110]={0};
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(h=1;h<n;h++)
			{hm=hang(a[0],n,h);a[0][0]-=hm;
			for(j=h;j<n;j++)a[0][j]-=hm;
			for(i=h;i<n;i++)
			{hm=hang(a[i],n,h);a[i][0]-=hm;
			for(j=h;j<n;j++)a[i][j]-=hm;}
			lm=lie(a,n,0,h);a[0][0]-=lm;
			for(i=h;i<n;i++)a[i][0]-=lm;
			for(j=h;j<n;j++)
			{lm=lie(a,n,j,h);a[0][j]-=lm;
			for(i=h;i<n;i++)a[i][j]-=lm;}
			s+=a[h][h];}
		printf("%d\n",s);}
}
