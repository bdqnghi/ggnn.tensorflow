main()
{
	int n ;
	scanf ("%d",&n);
	char str[510],a[510][6];
	scanf("%s",str);
	for (int i=0;i<= (strlen(str)-n);i++)
		for(int m =i;m <=i+n-1 ;m++) 
			a[i][m-i]=str[m];
	int b[510];
	for (int e=0;e<=(strlen(str)-n);e++)
	{
		int l=0;
		for (int j=e;j<=(strlen(str)-n);j++)
		{
			if (strcmp(a[e],a[j])==0)
			l++;
			else
			l=l;
		}
		b[e]=l;
		
	}
	
	int lmax=b[0];
	for (int c=1;c<=(strlen(str)-n);c++)
		{
			if(b[c]>lmax)
			lmax=b[c];
			else lmax=lmax;
		}
	
	if(lmax==1)
	printf("NO");
	else
	{
		printf ("%d\n",lmax);
	for (int d=0;d <=(strlen(str)-n);d++)
		{
			if (b[d]==lmax)
			printf ("%s\n",a[d]);
		}
	}
}