void main()
{
	int n,i,j,k;
	int at[26]={0};
	char c;
	scanf("%d",&n);
	struct st
	{
		int id;
		char s[27];
	}a[999],*p;
	for(p=a;p<a+n;p++)scanf("%d %s",&p->id,p->s);
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			c=a[i].s[j];
			if(c!='\0')at[c-65]++;
			else break;
		}
	}
	int max=0;
	for(i=0;i<26;i++)
	{
		if(at[i]>max)
		{
			max=at[i];
			j=i;
		}
	}
	char x;
	x=j+65;	
	printf("%c\n%d\n",x,max);
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			c=a[i].s[j];
			if(c==x)printf("%d\n",a[i].id);
			if(c=='\0')break;
		}
	}
}