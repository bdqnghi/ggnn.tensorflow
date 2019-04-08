char str[10],substr[3],a[13];
void F(int);
void main()
{
	int k,b;
	while (scanf("%s%s",str,substr)!=EOF)
	{
		k=strlen(str);
		F(k);
		for(b=0;b<=k+2;b++)
		printf("%c",a[b]);
		printf("\n");
	}
}
void F(int k)
{
	int t,i,j,e=0,f;
	for(i=0;i<k;i++)
	{f=0;
	for(j=i+1;j<k;j++)
	{if(str[i]<str[j]) f++;}
	if(f==0) {t=i;break;}
	}
	for(i=0;i<=t;i++)
	{
		a[i]=str[i];
	}
	for(j=t+4;j<=k+2;j++)
	{
		a[j]=str[j-3];
	}
	for(i=t+1;i<=t+3;i++)
	{
		a[i]=substr[e];e++;
	}
}