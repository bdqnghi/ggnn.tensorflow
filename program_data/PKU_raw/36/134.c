void main()
{
	int i,j,m[130]={0},n[130]={0};
	char a[300],b[300];
    	scanf("%s%s",a,b);
	if(strlen(a)!=strlen(b))
		printf("NO");
	else
	{
		for(i=0;i<=strlen(a)-1;i++)
		{
			++m[a[i]];
			++n[b[i]];
		}
		for(j=50;j<=122;j++)
			if(m[j]!=n[j])
			{
			    printf("NO\n");
			    break;
			}
		 if(j==123)
		 printf("YES\n");
	}
}
