int N;
	int a[26]={2100000000};
void main()
{

	int f(int x);
	int i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
		scanf("%d",&a[i]);

     printf("%d",f(0)-1);
}
int f(int x)
{
	int i;
	int p;
	int y=0;
	for(i=x+1;i<=N;i++)
	{
		if(a[i]<=a[x])
		{
			p=f(i);
			y=(y>=p?y:p);
		}
	}
	return (y+1);
}
