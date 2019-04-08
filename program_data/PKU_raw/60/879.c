int g(int x)
{
	if(x==0)return 0;
	else{
	if(x==1)return 1;
	else{
	int s=0,i=1;
	while(i<=x)
	{
		if(x%i==0)s++;
		i++;
	}
		return s;
	}
	}
}
int main()
{
	int i,n,p=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;i++)
	{
		if(g(i)==2 && g(i+2)==2)printf("%d %d\n",i,i+2);
		p++;
	}
	if(p==0)printf("empty");
	return 0;
}