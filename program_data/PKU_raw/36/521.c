main()
{
	int n,i,j,l,l1,t,c[1000],d[1000];
	char a[1000],b[1000];
	scanf("%s%s",a,b);
	l=strlen(a);l1=strlen(b);
	if (l==l1) 
	
	{ 	for(i=0;i<l;i++)
	{ c[i]=0;d[i]=0;}
	for(i=0;i<l;i++)
	{  for (j=0;j<l;j++)
	if (a[i]==b[j]&&d[j]==0) {d[j]=1;c[i]=1;break;}
	}
	
	t=0;
	for(i=0;i<l;i++)
	{ 
	if (c[i]==0) {t=1;break;}}
	if(t==1) printf("NO");
	else printf("YES");
	}
	if (l!=l1) printf("NO");
}
