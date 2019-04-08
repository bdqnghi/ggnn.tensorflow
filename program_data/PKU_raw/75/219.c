int a[1000],b[1000];
int main()
{
	char c;
	int n,i=0,j,MAX,t,min,max;
    while(1==1)
	{
		scanf("%d",&a[i]);
	    scanf("%c",&c);
		i=i+1;
		if(c!=',')
			break;
	}
	i=0;
	while(1==1)
	{
		scanf("%d",&b[i]);
	    scanf("%c",&c);
		i=i+1;
		if(c!=',')
			break;
	}
    n=i;
	min=a[0];
    for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	MAX=0;
	for(i=min;i<max;i++)
	{
		t=0;
		for(j=0;j<n;j++)
		{
			if(b[j]>i && a[j]<=i)
				t++;
		}
		if(t>MAX)
			MAX=t;
	}
	printf("%d %d",n,MAX);
	return 0;
}