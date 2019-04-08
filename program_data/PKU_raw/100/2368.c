void main()
{
	char a[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i,j,k,l,t=0;
		char b[300];int c[52];
		for(l=0;l<52;l++)
			c[l]=0;

    for(i=0;;i++)
	{
		scanf("%c",&b[i]);
		if(b[i]=='\n')
			break;

	}
	if(b[0]=='\n')
		printf("NO\n");
	for(i=0;i<52;i++)
	{
	for(j=0;;j++)
	{
		if(b[j]==a[i])
			c[i]++;
		if(b[j]=='\n')
			break;
	}
	}
	for(k=0;k<52;k++)
	{
		if(c[k]!=0)
			printf("%c=%d\n",a[k],c[k]);
	}
	for(l=0;l<52;l++)
	{
	if(c[l]!=0)
		t++;
	}
	if(t==0)
		printf("No\n");

}