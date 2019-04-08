void main()
{
	int i,j,k,l,t,n,p,a[26]={0},r;
	char str[max]={0};
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++)
	{
		r=0;
		gets(str);
		n=strlen(str);
		for(j=0;j<n;j++)
		{
			p=(int)(str[j]-97);
			a[p]++;
		}
		for(k=0;k<n;k++)
		{
			if(a[(int)(str[k]-97)]==1)
			{
				r++;
				printf("%c\n",str[k]);
				break;
			}
		}
		if(r==0)
			printf("no\n");
for(l=0;l<26;l++)
a[l]=0;
	}
}
