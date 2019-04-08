void main()
{
	char str[501],str1[501][5],str2[501];
	int n,i,a,b,c,d,e,l,j,k,js[501];
	scanf("%d\n",&n);
	gets(str);
	l=strlen(str);
	for(i=0;i<l-n+1;i++)
	{
		js[i]=1;
		for(j=0;j<n;j++)
			str1[i][j]=str[i+j];
	}
	for(i=0;i<l-n+1;i++) str1[i][n]='\0';
	for(i=0;i<l-n;i++)
	{
		for(j=i+1;j<l-n+1;j++)
			if(strcmp(str1[i],str1[j])==0) {js[i]++;}
	}
	for(i=0;i<l-n;i++)
		for(j=0;j<l-n-i;j++)
			if(js[j]<js[j+1])
			{
				k=js[j];
				js[j]=js[j+1];
				js[j+1]=k;
				strcpy(str2,str1[j]);
				strcpy(str1[j],str1[j+1]);
				strcpy(str1[j+1],str2);
			}
	if(js[0]==1) {printf("NO\n");}
	else
	{
	printf("%d\n",js[0]);
	for(i=0;i<l-n+1;i++)
		if(js[i]==js[0]) puts(str1[i]);
	}





}