int a[5000];
int main()
{
	int sushu(int y);
	int x,i;
	scanf("%d",&x);
	for(i=0;i<x/2;i++)
	{
		a[i]=i+1;
	}
	for(i=2;i<x/2;i++)
	{
		if(sushu(a[i])&&sushu(x-a[i]))
				printf("%d %d\n",a[i],x-a[i]);
	}
	return 0;
}
int sushu(int y)
{
	int i;
	for(i=2;i<y/2+2;i++)
	{
		if(y%i==0)
			break;
	}
	if(i<y/2+1) 
		return 0;
	else
		return 1;
}
