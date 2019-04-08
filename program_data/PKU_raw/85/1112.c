int main()
{
	int n,i,mark,m,j;
	char a[21]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		m=strlen(a);
		for(j=0;j<m;j++)
		{
			if(a[j]=='_'||(a[j]>='0'&&a[j]<='9')||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
				mark=0;
			else{
				mark=1;
				break;
			}
		}
		if(a[0]>='0'&&a[0]<='9')
			mark=1;
		if(mark==1)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}

