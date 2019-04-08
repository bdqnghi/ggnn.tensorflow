int main()
{
    char a[100],b[100];
	int i,l;
	gets(a);
	l=strlen(a);
	if(l==1)printf("%c\n",a[0]+48);
	else
	{
	for(i=0;i<l-1;i++)b[i]=a[i]+a[i+1];
	b[l-1]=a[0]+a[l-1];
	for(i=0;i<l;i++)printf("%c",b[i]);
	}
	return 0;
}

