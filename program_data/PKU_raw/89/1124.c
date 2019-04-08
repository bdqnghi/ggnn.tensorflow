struct man
{
	int a;
	int b;
}person[10000];
int main()
{
	int n=0;
	int x=0,y=0;
	int i=0;
	cin>>n;
	while(1)
	{
		cin>>x>>y;
		if(x==0&&y==0)
			break;
		person[x].a++;
		person[y].b++;
	}
	for(i;i<n;i++)
	{
		if(person[i].a==0&&person[i].b==n-1)
		{
			printf("%d\n",i);
			break;
		}
	}
	if(i==n)
		printf("NOT FOUND\n");
	return 0;
}