void main()
{
	char str[500];
	int n,max,i,j,k,len,t[500]={0},f;
	scanf("%d\n",&n);
	gets(str);
	len=strlen(str);
	for (i=0;i<=len-n;i++)
	{
		for (j=i;j<=len-n;j++)
		{
			f=1;
			for (k=0;k<n;k++)
				if (str[i+k]==str[j+k]) f*=1;
				else f*=0;
			if (f==1) t[i]++;
		}
	}
	max=0;
	for (i=0;i<=len-n;i++)
		if (t[i]>max) max=t[i];
	if (max<=1) printf("NO");
	else printf("%d\n",max);
	for (i=0;i<=len-n;i++)
		if (t[i]==max && t[i]>1)
		{
			for (k=0;k<n;k++)
				printf("%c",str[i+k]);
			putchar(10);
		}
}

	