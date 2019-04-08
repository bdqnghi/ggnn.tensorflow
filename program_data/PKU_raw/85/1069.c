void main()
{
	int n,i,count=0,len,j;
	char zf[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",zf);
		len=strlen(zf);
		if((zf[0]>='a'&&zf[0]<='z')||(zf[0]>='A'&&zf[0]<='Z')||zf[0]=='_')
			count++;
		for(j=1;j<len;j++)
		{
			if((zf[j]>='a'&&zf[j]<='z')||(zf[j]>='A'&&zf[j]<='Z')||zf[j]=='_'||(zf[j]>='0'&&zf[j]<='9'))
				count++;
		}
		if(count==len)
			printf("yes\n");
		else
			printf("no\n");
		count=0;
	}
}
