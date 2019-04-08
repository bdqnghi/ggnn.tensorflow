int main()
{
	char s[1000],x,a[1000];
	int i,j,k,t,c[1000]={0};
	scanf("%s",s);
	k=strlen(s);
	for(i=0;i<k;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]-=32;
		}
	}
	a[0]=s[0];
	x=s[0];
	for(i=1,t=1;i<k;i++)
	{
		if(x!=s[i])
		{
			c[t]=i;
			x=s[i];
			a[t]=s[i];
			t++;
		}
	}
	c[t]=k;
	for(i=0;i<=t-1;i++)
	{
		printf("(%c,%d)",a[i],c[i+1]-c[i]);
	}
	return 0;
}