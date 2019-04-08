int main()
{
	char a[110]={0};
	int i,n;
	for(i=0;i<110;i++)
	{
		scanf("%c", &a[i]);
		if(a[i]==' ' && a[i-1]==' ') i-=1;
		if(a[i]=='\n')
		{
			n=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
    return 0;
}