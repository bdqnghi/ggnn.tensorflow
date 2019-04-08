void main()
{
	int n;
	scanf("%d\n",&n);
	char a[600];
	gets(a);
	int l=strlen(a);
	int i,j,k,l2=l-n+1;
	int N[600];
	for(i=0;i<l2;i++) N[i]=0;
	for(i=0;i<l2;i++)
		for(j=i+1;j<l2;j++)
		{
			int flag=1;
			for(k=0;k<n;k++)
				if(a[j+k]!=a[i+k]) {flag=0; break;}
			if(flag==0) continue;
			else N[i]=N[i]+1;
		}
	int max=N[0];

	for(i=0;i<l2;i++)
		if(N[i]>max) max=N[i];
	
	if(max==0) printf("NO\n");
		else{
		printf("%d\n",max+1);
	for(i=0;i<l2;i++)
		if(N[i]==max)
		{
			for(j=i;j<i+n;j++)
				printf("%c",a[j]);
			printf("\n");
	}}
}

