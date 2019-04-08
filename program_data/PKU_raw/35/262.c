int main()
{
	int i,j,m,n,s,s1,t,x1,x,z=0,a[8][8]={0};
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{	
		s1=-1; s=8;x=8;
		x1=10000;
		for(j=0;j<n;j++)
		{
			if(s1<a[i][j]) {s1=a[i][j]; s=j;}
		}
		for(t=0;t<m;t++)
		{
			if(x1>a[t][s]) {x1=a[t][s]; x=t; }
		}
		if(x==i) {printf("%d+%d\n",x,s); z++;}
	}
	if(z==0) printf("No");
	//scanf("%d",&n);
	return 0;
}