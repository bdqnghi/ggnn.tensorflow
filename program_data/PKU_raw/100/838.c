int main ()
{  
	char s[1000];
	gets(s);
	int l,m,k,i,a[30];
	l=strlen(s);
	m=1;
    for(k=97;k<=122;k++)
	{
		a[k]=0;
		for(i=0;i<l;i++)
		{
			if(s[i]==k)
			{
				m=2;
				a[k]++;
			}
		}
		if(a[k]!=0)
		{
			printf("%c=%d\n",k,a[k]);
		}
	}
	if(m==1) printf("No\n");
	return 0;
}