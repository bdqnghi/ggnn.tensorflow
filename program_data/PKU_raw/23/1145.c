int main(void)
{
	char a[100],*p,*ipa[100];
	int i,j,n,k=1;
	gets(a);
	n=strlen(a);
	p=a;
	ipa[0]=&a[0];
	for(i=0;i<n;i++,p++)
		if(*p==' ') 
		{ipa[k]=p;k++;}
	ipa[k]=&a[n];
	for(;k>1;k--)
	{
	   for(i=0,p=a;i<n;i++,p++)
		if(ipa[k]>p&&p>ipa[k-1])
			printf("%c",*p);
		printf(" ");
	}
	for(i=0,p=a;i<n;i++,p++)
		if(ipa[0]<=p&&p<ipa[1])
			printf("%c",*p);
}
