void main()
{
	char a[100][100],c;
	int i,b[100],j,n,k;
	for(j=0;;j++)
	{
	i=0;
	c=getchar();
	if(!((c>='a'&&c<='z')||(c>='A'&&c<='z')||c=='('||c==')'))
		break;
	a[j][i]=c;
	i++;
	while((c=getchar())!='\n')
	{
		a[j][i]=c;
		i++;
	}
	b[j]=i;
	}
	n=j;
	for(j=0;j<n;j++)
	{
	for(i=0;i<b[j];i++)
		printf("%c",a[j][i]);
	putchar('\n');
	for(i=0;i<b[j];i++)
	{
		if((a[j][i]>='a'&&a[j][i]<='z')||(a[j][i]>='A'&&a[j][i]<='Z'))
			a[j][i]=' ';
	}
	for(i=0;i<b[j];i++)
	{
		if(a[j][i]==')')
		{
			for(k=i-1;k>-1;k--)
			{
				if(a[j][k]=='(')
					break;
			}
			if(k!=-1)
			{
				a[j][k]=' ';
				a[j][i]=' ';
			}
		}
	}
	for(i=0;i<b[j];i++)
	{
		if(a[j][i]=='(')
			a[j][i]='$';
		if(a[j][i]==')')
			a[j][i]='?';
	}
	for(i=0;i<b[j];i++)
		printf("%c",a[j][i]);
	printf("\n");
	}
}