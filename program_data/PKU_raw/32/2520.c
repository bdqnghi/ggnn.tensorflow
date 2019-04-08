int main()
{
	int n,i,s,j,k,t,sum=0,c[200]={0},d[200]={0},e[200]={0};
	char a[200]={0},b[200]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
        scanf("%s",b);
		s=strlen(a);
		t=strlen(b);
		int e[200]={0},c[200]={0},d[200]={0};
        for(j=0;j<s;j++) c[j]=a[s-j-1]-48;
		for(j=0;j<t;j++) d[j]=b[t-j-1]-48;
		for(j=0;j<s;j++)
		{
			if(c[j]-d[j]>=0) e[j]=c[j]-d[j];
			else {e[j]=10+c[j]-d[j]; c[j+1]--;}
		}
		for(j=s-1;j>=0;j--)
		{
			if(e[j]!=0) {k=j;break;}
		}
		for(j=k;j>=0;j--)
		{
			printf("%d",e[j]);
		}
		for(j=0;j<=s-1;j++){if(e[j]==0) sum++;}
		if(sum==s) printf("0");
		printf("\n");	
	}
    return 0;
}
