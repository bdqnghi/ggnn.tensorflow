void main()
{
	int enter[1000]={0},leave[1000]={0},i,j=0,e=0,l=0;
	char c;
	int ans[1000]={0};
	do
	{
		scanf("%d",&enter[e]);
		scanf("%c",&c);
		e++;
	}while(c==',');
	do
	{
		scanf("%d",&leave[l]);
		scanf("%c",&c);
		l++;
	}while(c==',');
	printf("%d",l);
	int start=enter[0],end=leave[0];
	for(j=1;j<l;j++)
	{
		if(start>enter[j])
			start=enter[j];
		if(end<leave[j])
			end=leave[j];
	}
	for(i=start;i<end;i++)
	{
		for(j=0;j<l;j++)
		{
			if(enter[j]<=i&&leave[j]>i)
				ans[i]++;
		}
	}
	int m=ans[start];
	for(j=start;j<end;j++)
	{
		if(m<ans[j])
			m=ans[j];
	}
	printf(" %d",m);
}

