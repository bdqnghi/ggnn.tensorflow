void f(char a[],int l)
{
	int i,j;
	char t;
	for(i=0;i<l-1;i++)
	{
		for(j=l-2;j>=0;j--)
			if(a[j]>a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}
	}
}
main()
{
	char a[500]={0},b[500]={0};
	scanf("%s %s",a,b);
	int la=strlen(a),lb=strlen(b);
	f(a,la);
	f(b,lb);
	if(strcmp(a,b)==0) printf("YES\n");
	else printf("NO\n");
}