void main()
{
	char a[1000];
	int l,i,b[1000]={0},t=0,max=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=',')
		{
			b[t]=b[t]*10+(int)a[i]-48;
		}
		else 
		{
			t++;
		}
	}
	for(i=0;i<=t;i++)
	{
		max=MAX(max,b[i]);
	}
	for(i=0;i<=t;i++)
	{
		if(b[i]==max)
		{
			b[i]=0;
		}
	}
	max=0;
	for(i=0;i<=t;i++)
	{
		max=MAX(max,b[i]);
	}
	if(max!=0)
		printf("%d",max);
    else printf("No");
}