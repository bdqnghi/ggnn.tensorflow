void main()
{
	char a[1000],b[1000];
	int i,j,c[1000]={0},d[1000]={0},z=1;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(d[j]==0&&b[j]==a[i])
			{c[i]=1;d[j]=1;break;}
		}
	}
	for(i=0;a[i]!='\0';i++)
	if(c[i]==0){z=0;break;}
	for(j=0;b[j]!='\0';j++)
	if(d[j]==0){z=0;break;}
	if(z==1)printf("YES\n");
	else printf("NO\n");
}	