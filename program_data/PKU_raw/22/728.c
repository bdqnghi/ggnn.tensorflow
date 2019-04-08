int main()
{
	int a,b,i;
	char c=',';
	a=-1;
	b=1;
	while(c==',')
	{
		scanf("%d%c",&i,&c);
		if(i>a)
		{
			b=a;
			a=i;
		}
		else if((i<a)&&(i>b))
			b=i;
	}
	if(b==-1)
		printf("No\n");
	else
		printf("%d\n",b);
	return 0;
}