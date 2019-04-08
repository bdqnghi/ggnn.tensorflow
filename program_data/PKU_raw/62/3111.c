void del(char a[100],int k,int n)
{
	int i;
	for (i=k;i<=n;i++) a[i]=a[i+1];
}

int main()
{
	char a[100]; int i,n;
	gets(a); n=strlen(a);
	i=1;
	while (i<=n)
		if ((a[i-1]==' ')&&(a[i]==' ')) 
		{
			del(a,i,n);
			n--;
		} else i++;
	puts(a);
	return 0;
}
	
