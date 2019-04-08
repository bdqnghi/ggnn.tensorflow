int main()
{
	char a[256],*ps,b[256];
	int n;
	scanf("%d",&n);
    int i,k;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		k=0;
		for(ps=a;*ps!='\0';ps++)
		{
			if(*ps=='A') {b[k]='T';}
			else if(*ps=='T') {b[k]='A';}
			else if(*ps=='C') {b[k]='G';}
			else {b[k]='C';}
			k++;
		}
		b[k]='\0';
		printf("%s\n",b);
	}
	return 0;
}