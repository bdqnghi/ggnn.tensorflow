int u=0;
void prin(char a[],int l)
{
	int i,j;
	for(i=0;i<l;i++)
	{
		if(a[i]=='\0')
			continue;
		for(j=i+1;j<l;j++)
		{
			if(a[j]=='\0')
				continue;
			if(a[j]!=a[i])
			{
				printf("%d %d\n",i,j);
				a[i]='\0';
				a[j]='\0';
				u++;
				break;
			}
			if(a[j]==a[i])
				break;
		}
		if(a[j]!='\0')
			continue;
		if(a[j]=='\0')
			break;
	}
	if(u!=l/2)
		prin(a,l);
}
	



void main()
{
	char a[100];
	int l;
	gets(a);
	l=strlen(a);
	prin(a,l);
}
