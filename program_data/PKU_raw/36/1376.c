void f(char c[1000],int i)
{
	int j,k;
	for(j=0;j<i;j++)
	{
		for(k=0;k<i-j;k++)
		{
			if(c[k]>c[k+1])
			{
				char s;
				s=c[k];
				c[k]=c[k+1];
				c[k+1]=s;
			}
		}
	}
}
int main()
{
	char s[1000],c[1000];
	scanf("%s%s",s,c);
	int lens,lenc;
	lens=strlen(s);
	lenc=strlen(c);
	int i,j,k;
	if(lens!=lenc)
		printf("NO");
	else
	{
		f(s,lens);
		f(c,lenc);
		for(k=0;k<lens;k++)
		{
			if(s[k]!=c[k])
			{
				printf("NO");
				break;
			}
		}
		if(k==lens)
			printf("YES");
	}
}


