void main()
{
	char s1[15]={'\0'},s2[4]={'\0'},a[15]={'\0'},c[15]={'\0'};
	int i,j,n,m=0,k=0;
	while (scanf("%s%s",s1,s2)!=EOF)
	{		
		n=strlen(s1);
		for(i=0;i<n;i++) c[i]=s1[i];
		for(i=0;i<n-1;i++)
		{
			if(s1[m]<s1[i+1]) m=i+1;
		}
		for(i=0;i<=m;i++) {printf("%c",c[i]);s1[i]='\0';c[i]='\0';}
		printf("%c%c%c",s2[0],s2[1],s2[2]);
		for(j=m+1;j<n;j++) {printf("%c",c[j]);s1[j]='\0';c[j]='\0';}
		printf("\n");m=0;k=0;
	}
}
