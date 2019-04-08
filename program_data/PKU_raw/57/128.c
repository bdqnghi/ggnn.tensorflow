main()
{
	int i,j,n,s,t,r,l;
	char a[51][1000];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{ gets(a[i]);
	  l=strlen(a[i]);
	  if (a[i][l-1]=='r') {for(j=0;j<l-2;j++) printf("%c",a[i][j]);}
	  else if (a[i][l-1]=='y') {for(j=0;j<l-2;j++) printf("%c",a[i][j]);}
	  else if (a[i][l-1]=='g') {for(j=0;j<l-3;j++) printf("%c",a[i][j]);}
	 printf("\n");
	}
}
