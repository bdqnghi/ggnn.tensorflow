int main()
{
	int x[1001],y[1001];
	int i,j,n,s=0,max=0;
	char c;
	for(i=0;;i++)
	{
		scanf("%d",&x[i]);
		if((c=getchar())=='\n')
			break;
	}
	for(i=0;;i++)
	{
		scanf("%d",&y[i]);
		if((c=getchar())=='\n')
		{
			n=(i+1);
			break;
		}
	}
	for(j=0;j<=1000;j++)
	{
		for(i=0;i<=(n-1);i++)
		{
			if((x[i]<=j)&&(y[i]>j))
				s++;
		}
		if(s>max)
			max=s;
			s=0;
	}
	printf("%d %d\n",n,max);
	return 0;
}