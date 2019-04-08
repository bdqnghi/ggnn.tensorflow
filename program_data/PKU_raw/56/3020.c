void main()
{
    char a[6],temp;
	int n,i,j;
	scanf("%s",a);
	n=strlen(a);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
	         a[i]=a[j];
		a[j]=temp;
	}
	puts(a);
}
