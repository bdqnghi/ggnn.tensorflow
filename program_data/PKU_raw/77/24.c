void main()
{
	char a[100];
	int i,j,l,k,b[100];
	gets(a);
    l=strlen(a);
	for(i=0;i<l;i++)
		b[i]=i;
    for(k=0;k<l;)
	{
	for(i=0;i<l-k-1;i++)
		if(a[i]==a[0]&&a[i+1]==a[l-k-1])
		{
			printf("%d %d\n",b[i],b[i+1]);
			for(j=i;j<l;j++)
			{
				a[j]=a[j+2];
				b[j]=b[j+2];
			}
			break;
		}
		k=k+2;
	}
}