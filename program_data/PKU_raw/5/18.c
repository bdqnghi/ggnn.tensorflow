int main()
{
	char y[501],s[501];
	double h;
	scanf("%lf",&h);
	scanf("%s",y);
	scanf("%s",s);
	int len=strlen(y),i,sum=0,l=strlen(s);
	if(len!=l)
	{
		printf("error");
	    return 0;
	}	
	for(i=0;i<len;i++)
	{
		if((y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')||(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'))
		{
			printf("error");
			return 0;
		}
		else if(y[i]==s[i])
		{
			sum++;
		}
	}
	double p=(double)sum/len;
	if(p>h)
	{
		printf("yes");
		return 0;
	}
	printf("no");
	return 0;
}
