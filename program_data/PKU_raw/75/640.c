int main()
{
	int a[1001]={0},b[1001]={0};//???????
	int i=1,count,max1=INT_MIN,min1=INT_MAX,MAX=0,total=0;//??????????????
	while(1)//?????????? ????
	{
		scanf("%d", &a[i++]);
		char c = cin.get();
		if(c=='\n')
		{
			count=i;
			break;
		}
	}
	i=1;
	while(1)
	{
		scanf("%d", &b[i++]);
		char c = getchar();
		if(c=='\n')break;
	}
	count=i-1;
	for(int j=1;j<=count;j++)
		min1=min1>=a[j]?a[j]:min1;
	for(int j=1;j<=count;j++)
		max1=max1<=b[j]?b[j]:max1;
	for(int l=min1;l<=max1;l++)
	{
		for(int k=1;k<=count;k++)
		{
			if(a[k]==l)
			{
				total++;
			}
			if(b[k]==l)
			{
				total--;
			}

		}
		MAX=MAX>=total?MAX:total;
	}

	cout<<count<<" "<<MAX<<endl;
	return 0;
}