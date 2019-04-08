void main()
{
	int i,j,k,t,s,m,n,len;
	int sta[320],end[320];
	char str[10000];
	gets(str);
	len=strlen(str);
	
	sta[0]=0;
	i=1;
	for(j=0;j<len;j++)
		if(str[j-1]==' '&&str[j]!=' ')
		{sta[i]=j;
		i++;}
	k=0;
	for(j=0;j<len;j++)
		if(str[j-1]!=' '&&str[j]==' ')
		{end[k]=j;
		k++;}
		end[k]=len;
		printf("%d",end[0]-sta[0]);
		for(i=1;i<k+1;i++)
			printf(",%d",end[i]-sta[i]);
}