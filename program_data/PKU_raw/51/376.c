int main()
{
	int n;
	scanf("%d",&n);getchar();
	char a[500],b[500][6];
	gets(a);
	int c=0,d=0,e=0,f;
	f=strlen(a);
	while(e<(f-n+1))
	{
		while(c<n)
		{
			b[d][c]=a[e];
			e++;
			c++;
		}
		b[d][c]=0;
		e=e-(n-1);
		c=0;
		d=d+1;
	}



	int maxi[500],g,h,max;
	int count[500]={0};
	for(g=0;g<d;g++)//???????
	{		
		for(h=g+1;h<d;h++)
		{
			if (strcmp(b[g],b[h])==0)
			{
				count[g]=count[g]+1;
			}
		}
	}

	max=count[0];
	int i=0;
	for(i=0;i<d;i++)//???????
	{
		if(max<count[i])
		{
			max=count[i];
		}
	}
	if(max==0)
		printf("NO");
	else {
	printf("%d\n",max+1);
	int j;
	for(j=0;j<d;j++)
	{
		if(count[j]==max)
			puts(b[j]);
	}
	}
	

	return 0;
}