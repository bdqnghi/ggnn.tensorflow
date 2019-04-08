int main()
{
	char a[100],b[100];
	int i,n;
	gets(a);
	n=0;
        for(i=0;i<100;i++)
		{
			if(a[i]!='\0'||a[i]==' ')
				n++;
			if(a[i]=='\0')
				break;
		}
		for(i=0;i<n-1;i++)
		{
			b[i]=a[i]+a[i+1];
		}
		b[n-1]=a[0]+a[n-1];
		for(i=0;i<n;i++)
		{
		printf("%c",b[i]);
		}
		return 0;
}
