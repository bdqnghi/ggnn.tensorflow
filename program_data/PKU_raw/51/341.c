int main()
{
    int n,l,i,j,b[500]={0},max=0,d[500]={0};
    char a[500]={0},c[500][5]={0};
    scanf("%d",&n);getchar();
    gets(a);
    l=strlen(a);
    for(i=0;i+n<=l;i++)
        for(j=0;j<n;j++)
        	c[i][j]=a[i+j];//????? 
    for(i=0;i+n<=l;i++)
    	for(j=0;j+n<=l;j++)
        	if(strcmp(c[i],c[j])==0)
			{b[i]++;if(i<j)d[j]=1;}
	for(i=0;i+n<=l;i++)if(b[i]>max)max=b[i];
	if(max<=1)printf("NO\n",max);
	else {
		printf("%d\n",max);
		for(i=0;i+n<=l;i++)
		if(b[i]==max&&d[i]==0)puts(c[i]);
	}
}