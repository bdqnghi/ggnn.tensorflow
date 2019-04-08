int fun(int x,int y)
{
	int i,sum=0;
	for(i=x;i*i<=y;i++)
		if(y%i==0) {sum++;sum+=fun(i,y/i);}
    return sum;
}
int main()
{
	int n,i,sum;
	scanf("%d",&n);
	while(n>0)
	{	n--;
		scanf("%d",&i);sum=1;
		sum+=fun(2,i);
		printf("%d\n",sum);
	}
	return 0;
}