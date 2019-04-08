int k,height[25];
int route(int m)
{
	int i,a=0,max=0;
	for(i=m+1;i<k;i++)
		if(height[i]<=height[m])
			a+=1;
	if(a==0)
	    return 1;
	else
	{
		for(i=m+1;i<k;i++)
			if(height[i]<=height[m]&&route(i)>max)
				max=route(i);
		return (max+1);
	}
}
int main()
{
	int i,ans[25],a=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&height[i]);
	for(i=0;i<k;i++)
		ans[i]=route(i);
	for(i=0;i<k;i++)
		if(ans[i]>a)
			a=ans[i];
	printf("%d\n",a);
}