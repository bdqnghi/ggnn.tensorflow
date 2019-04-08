void main()
{
	struct book
	{
		int bianhao;
		char zuozhe[100];
	}a[1000];
	int i,j,n,l,max;
	int b[26]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %s",&a[i].bianhao,a[i].zuozhe);
	for(i=0;i<n;i++)
	  for(j=0;a[i].zuozhe[j]!='\0';j++)
		b[a[i].zuozhe[j]-65]++;
	max=b[0];
	l=0;
	for(i=1;i<=25;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			l=i;
		}
	}
	printf("%c\n",l+65);
	printf("%d\n",max);
	for(i=0;i<n;i++)
		for(j=0;a[i].zuozhe[j]!='\0';j++)
			if(a[i].zuozhe[j]==(l+65))
			{
				printf("%d\n",a[i].bianhao);
			    break;
			}
} 





		