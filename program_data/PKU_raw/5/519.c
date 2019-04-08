int main()
{
	int i,j,a,b,c=0,d=0;
	double x,y=0;
	char s[501],z[501];
	scanf("%lf",&x);
	scanf("%s",s);
	scanf("%s",z);
	for(i=0;i<501;i++)
	{
		if(s[i]=='\0')
		{
			break;
		}
		if((s[i]!='A'&&s[i]!='T'&&s[i]!='G'&&s[i]!='C')||(z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G'))
		{
			c=1;
		}
	}
	for(j=1;j<501;j++)
	{
		if(s[j]=='\0')
		{
			break;
		}
	}
	a=j;
	for(j=1;j<501;j++)
	{
		if(z[j]=='\0')
		{
			break;
		}
	}
	b=j;
	if(c==1||a!=b)
	{
		printf("error");
		return 0;
	}
	for(i=0;i<a;i++)
	{
		if(s[i]==z[i])
		{
			d++;
		}
	}
	y=(d-1)*1.0/(a-1);
	if(y>=x)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
