void main()
{
	int i,l[100],max,n,min;
	char c[100][30],c1[30],c2[30];
	/*scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",c[i]);l[i]=strlen(c[i]);}*/
	for(i=0;;i++)
	{
		if(scanf("%s",c[i])==EOF) break;
		l[i]=strlen(c[i]);
	}
	n=i;
	max=l[0];strcpy(c1,c[0]);
	for(i=0;i<n;i++)
	{
		if(l[i]>max) {max=l[i];strcpy(c1,c[i]);}
	}
	min=l[0];strcpy(c2,c[0]);
	for(i=0;i<n;i++)
	{
		if(l[i]<min) {min=l[i];strcpy(c2,c[i]);}
	}
	printf("%s\n",c1);
	printf("%s\n",c2);
}
		
		
