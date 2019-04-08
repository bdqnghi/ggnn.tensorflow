
int main()
{
	char s[1000];
	int i,n,b,j,k,x;
scanf("%s",s);
n=strlen(s);

for (i=2;i<=n;i++)
{
	
	for (k=0;k<=n-i;k++)
	{b=0;
		for (j=0;j<i;j++)
			if (s[k+j]==s[k+i-j-1])
				b++;
			if(b==i)
			{
				for (x=k;x<k+j;x++)
printf("%c",s[x]);				printf("\n");
			}
	}
}
	



			return 0;
}
