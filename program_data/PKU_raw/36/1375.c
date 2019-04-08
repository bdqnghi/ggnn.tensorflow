int main()
{
	char a[100]={'\0'},b[100]={'\0'};
	int i,j,p=0,x,y;
	for(i=0;i<=100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]==' ')
			break;
	}
	for(i=0;i<=100;i++)
	{
		scanf("%c",&b[i]);
		if(b[i]=='\n')
			break;
	}
	x=strlen(a)-1;
	y=strlen(b)-1;
	if(x==y)
		for(i=0;i<=x;i++)
		{
			p=0;
			for(j=0;j<=y;j++)
				if(a[i]==b[j])
				{
					p=1;
					b[j]=' ';
					break;
				}
			if(p==0)
				break;
		}
	if(p==1)
		printf("YES");
	else
		printf("NO");
	return 0;
}