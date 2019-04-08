void main()
{
	int w;
	for(w=1;;w++)
	{
	int a[16],b=0;
	int i,j,q;
	for(i=1;;i++)
	{
		scanf("%d",&a[i]);
		if(a[1]==-1) break;
		if(a[i]==0) break;
		b++;
	}
	if(a[1]==-1) break;
	int m=0;
	for(j=1;j<b;j++)
	{
		for(q=j+1;q<=b;q++)
		{
			if(a[j]==2*a[q]) m++;
			else if(a[q]==2*a[j]) m++;
		}
	}
	printf("%d\n",m);
    }
}