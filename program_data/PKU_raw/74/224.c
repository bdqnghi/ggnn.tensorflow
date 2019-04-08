int sushu(int x)
{
	int r,s;
	r=sqrt(x);
	for(s=2;s<=r;s++)
		if(x%s==0)break;
	if(s>r)return 1;
	else return 0;
}
int huiwen(int y)
{
	int k,e=y;
	for(k=0;e!=0;)
	{
		k=e%10+k*10;
		e=e/10;
	}
	if(k==y)return 1;
	else return 0;
}
void main()
{
	int m,n,a,b,c,d[300],i,j;
	for(i=0;i<300;i++)d[i]=0;
	scanf("%d %d",&m,&n);
	j=0;
	for(a=m;a<=n;a++)
	{
		b=0;c=0;
		if(sushu(a))b=1;
		if(huiwen(a))c=1;
		if((b==1)&&(c==1))
		{
			d[j]=a;
			j++;
		}
	}
	if((j==0)&&(d[0]==0))printf("no\n");
	else
	{
		for(i=0;i<j-1;i++)
			printf("%d,",d[i]);
		printf("%d\n",d[j-1]);
	}
}

