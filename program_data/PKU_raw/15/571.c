
int main()
{
	int n,a,b=0,c=0,d=0,i,k,max;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n;k++)
		{
			scanf("%d",&a);
			if(a==0)
			{
				b++;
				d++;
			}
		}
        if(d!=0)
		{
				c++;
			    d=0;
		}
	}
	max=((b-2*c)/2)*(c-2);
	printf("%d\n",max);
	return 0;
}