void main()
{
	int n,i,j,k,l,x[500],max;
	char s[500],s1[500][5];
	scanf("%d%s",&n,s);
	l=strlen(s);
	for(i=0;i<=l-n;i++)
		for(j=i,k=0;k<n;j++,k++)
			s1[i][k]=s[j];
	for(i=0;i<=l-n;i++)
	{
		x[i]=1;
		for(j=i+1;j<=l-n;j++)
			if(strcmp(s1[i],s1[j])==0)
			{
				x[i]++;
				x[j]=-500;
			}
	}
	max=x[0];
	for(i=1;i<=l-n;i++)
		if(x[i]>max)
			max=x[i];
	if(max==1)
		printf("NO");
	else{
	printf("%d\n",max);
	for(i=0;i<=l-n;i++)
		if(x[i]==max)
			printf("%s\n",s1[i]);	
	}
}