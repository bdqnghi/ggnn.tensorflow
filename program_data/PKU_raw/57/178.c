void main()
{
	int n,i,t;
	char a[10]={""};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char b[10]={""};
		scanf("%s",a);
		t=strlen(a);
		switch(a[t-1])
		{
		case'r':strncpy(b,a,t-2);break;
		case'y':strncpy(b,a,t-2);break;
		case'g':strncpy(b,a,t-3);break;
		}
		puts(b);
	}
}