
int main()
{
	int shuzu[1001],jilu[1001];
	int a=0,b=0,c,n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
		scanf("%d",&shuzu[k]);
		if(shuzu[k]==0)
		{
			jilu[a]=k;
			a++;
		}
		}
		if(a==2)
		{
			c=jilu[1]-jilu[0]-1;
			b+=c;
		}
		a=0;
	}
	printf("%d",b);
	return 0;
}
