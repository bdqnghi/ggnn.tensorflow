void main()
{
	int a,b,n,l,t=1,i,j,g,re[100],k=0;
	long int sum=0;
	char num[100],c[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d %s %d",&a,num,&b);
	l=strlen(num);
	for(i=0;i<l;i++)
		if(num[i]>='a'&&num[i]<='z')
			num[i]=num[i]-32;
	for(i=l-1;i>=0;i--)
		for(j=0;j<a;j++)
		if(c[j]==num[i])
			{
				sum=sum+t*j;
				t=t*a;
			}
			while(sum>=b)
			{
				g=sum%b;
				re[k++]=c[g];
				sum=sum/b;
			}
			re[k]=c[sum];
		
		for(i=k;i>=0;i--)
			printf("%c",re[i]);
		printf("\n");
}