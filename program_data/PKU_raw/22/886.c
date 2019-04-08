int main()
{
	int i,max1,max2,t,x,j;
	char c;
	x=-999;
	j=0;
	max1=max2=0;
	for(i=0;i<300;i++)
	{
		scanf("%d",&t);
		scanf("%c",&c);
		if(t==x)
			j=j+1;
		if(t>max1)
		{
			max2=max1;
			max1=t;
		}
		else if(t<max1&&t>max2)
			max2=t;
		x=t;
		if(c=='\n')
			break;
	}
	if(i<=1)
		printf("No");
	else if(i==j)
		printf("No");
	else
		printf("%d",max2);
	return 0;
}