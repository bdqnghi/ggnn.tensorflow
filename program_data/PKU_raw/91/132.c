void main()
{
	int n,i;
	char a[300],b;
	gets(a);
	n=strlen(a);
	b=a[0];
	for(i=0;i<n-1;i++)
		*(a+i)=*(a+i)+*(a+i+1);
	*(a+n-1)=*(a+n-1)+b;
	puts(a);
}

