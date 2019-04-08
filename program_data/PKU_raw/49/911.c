void pdjsc(char c[10000])
{
	int i,j,k,l,p=0;
	char tp,a,b;
	l=strlen(c)-1;
	for(i=0;i<=l;i++)
	{if (c[i]==c[l-i]) continue;
	 else 
		{p=1;
		 break;
		}
	}
	if (p==0) printf("%s\n",c);
}
int main()
{
	int i,j,k,l,p=0;
	char tp,a,b;
	char c[10000]={' '};
	char s[10000]={' '};
    scanf("%s",s);
	l=strlen(s)-1;
	for(i=1;i<=l;i++)//i?????????-1?
		for (j=0;j<=l-i;j++)//j??????
		{for (k=0;k<=i;k++) c[k]=s[k+j];
			pdjsc(c);
		}
	return 7;
}