int main()
{
	char c[5];
	int i, t, k, l;   //k???????i????????
	scanf("%s", c);
	k=strlen(c);
	l=k/2;
	for(i=0;i<l;i++)
	{t=c[i];c[i]=c[k-i-1];c[k-i-1]=t;}
	printf("%s",c);
	return 0;
	}