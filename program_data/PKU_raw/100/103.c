void main()
{
	char a[300];int i,j,n,t,s=0;
	gets(a);
	for(i=0;;i++)
	{
		if(a[i]=='\0')
			break;
	}
	n=i;
	for(i=97;i<=122;i++)
	{
		t=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==i)
				t++;
		}
		if(t!=0)
		{
			printf("%c=%d\n",i,t);
			s++;
		}
	}
	if(s==0)
		printf("No\n");
}