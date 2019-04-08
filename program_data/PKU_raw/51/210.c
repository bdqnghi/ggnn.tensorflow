int main()
{
	int n,u[600]={0},l,g=0;
	char s[600]={0};
	scanf("%d",&n);
	scanf("%s",s);
	
	int i,j,k=0;
	char a[600][6]={0};
	
	for(i=0;i<strlen(s);i++)
		for(j=0;j<n;j++)
			a[i][j]=s[i+j];

	/*for(i=0;i<strlen(s);i++)
			puts(a[i]);*/
	for(i=0;i<strlen(s)-1;i++)
		for(j=i+1;j<strlen(s);j++)
			if(strcmp(a[i],a[j])==0)
				u[i]++;
	
	for(l=200;l>0;l--)
	{for(i=0;i<strlen(s);i++)
			if(u[i]==l)
			{if(!k)
				{printf("%d\n",l+1);k++;g++;}
			puts(a[i]);}
	if(g)break;}
	if(l==0)
		printf("NO");
}