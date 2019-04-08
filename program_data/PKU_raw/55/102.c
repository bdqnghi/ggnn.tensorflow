int change1(char a,int b,int c)
{
	int d;
	if(a>='0'&&a<='9') a=a-'0';
	else if(a>='a'&&a<='z') a=a-'a'+10;
	else if(a>='A'&&a<='Z') a=a-'A'+10;
	d=a*pow(c,b);
	return d;
};
char change2(char a)
{
	if(a>=0&&a<=9) a=a+'0';
	else if(a>=10) a=a+'A'-10;
	return a;
}

int main()
{
	int a,b,c,d,e,f,g,sum=0;
	char s[30],s2[30],s3[30];
	scanf("%d %s %d",&a,s,&b);
	c=strlen(s);
	for(d=0;d<c;d++)
	{
		sum+=change1(s[c-d-1],d,a);
	}
	if(sum==0)
	{
		printf("0");
		return 0;
	}
	for(e=0;;e++)
	{
		s2[e]=sum%b;
		sum=sum/b;
		if(sum<b)
		{
			s2[e+1]=sum;
			break;
		}
	}
	for(f=0;f<30;f++)
	{
		s2[f]=change2(s2[f]);
	}
	for(g=e+1;g>=0;g--)
	{
		printf("%c",s2[g]);
	}
}



