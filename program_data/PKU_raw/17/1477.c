char s2[101];

int ma(char s[],int p,int le)
{
	int ri;
	if (s[p]==0)
	{
		s2[p]=0;
		return 0;
	}
	else
	{
		if (s[p]=='(')
		{
			ri=ma(s,p+1,le+1);
			if (ri)
			{
				s2[p]=' ';
				return ri-1;
			}
			else
			{
				s2[p]='$';
				return 0;
			}
		}
		else if (s[p]==')')
		{
			if (le)
			{
				s2[p]=' ';
				return ma(s,p+1,le-1)+1;
			}
			else
			{
				s2[p]='?';
				return  ma(s,p+1,0)+1;
			}
		}
		else
		{
			s2[p]=' ';
			return ma(s,p+1,le);
		}
	}
}

int main()
{
	int n;
	scanf("%d\n",&n);
	char s1[101];
	int t;
	while(n)
	{
		n=n-1;
	gets(s1);
	puts(s1);
	t=ma(s1,0,0);
	printf("%s",s2);
	if (n) printf("\n");
	}
	return 0;
}
