
char s[50],w[50];

int judge(int n1,int x)
{
	int result=1,i;
	for(i=x;i<x+n1;i++)
	{
		if(s[i-x]!=w[i])
		{
			result=0;
			break;
		}
	}
	return result;
}

int main()
{
	scanf("%s %s",s,w);
	int i,n1=strlen(s),n2=strlen(w);
	for(i=0;i<n2;i++)
	{
		if(w[i]!=s[0]) continue;
		else
		{
			if(judge(n1,i)) break;
		}
	}
	printf("%d",i);
	return 0;
}