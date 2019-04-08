void main()
{
	char a[100]={0},zm[256];
	int cs[256],i,n=0,m=0;
	for(i=0;i<256;i++)
	{
		zm[i]=i;
		cs[i]=0;
	}
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		cs[a[i]]++;
		n++;
		i++;
	}
	i=65;
    while(i<=122)
	{
		if(cs[i]!=0)
		{
			printf("%c=%d\n",zm[i],cs[i]);
			m++;
		}
		if(i==90)
			i+=7;
		else
		i++;
	}
	if(m==0)printf("No\n");
}
