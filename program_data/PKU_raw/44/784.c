int main()
{
	void reserve(int num);
	int x[6],i;
	for(i=0;i<6;i++)
		scanf("%d",&x[i]);
	for(i=0;i<6;i++)
		reserve(x[i]);
	
	return 0;
}

void reserve(int a)
{
	int j,p[1000],q,m;
	if(a==0)
		printf("0");
	else 
	{if(a<0)
	{
		printf("-");
		a=-a;
	}
	for(j=0;;j++)
	{
		p[j]=a%10;
		a=a/10;
		if(a==0)
			break;
	}
	q=0;
	m=j+1;
	for(j=0;j<m;j++)
	{
		if(p[j]==0&&q==0)
			continue;
		printf("%d",p[j]);
		q=1;
	}
	}
	printf("\n");
}