void main()
{
	char bjs[200],js[200];
	int i,j,k,l,count,n,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(strcmp(bjs,js)!=0)
		{
		scanf("%s",bjs);
		scanf("%s",js);
		c=strlen(bjs)-strlen(js);
		for(j=strlen(js)-1;j>=0;j--)
		{
			if(bjs[c+j]<js[j])
			{
				for(k=1;;k++)if(bjs[c+j-k]>48)break;
				bjs[c+j-k]-=1;
				for(l=1;l<k;l++)bjs[c+j-l]=57;
				bjs[c+j]=58+bjs[c+j]-js[j];
			}
			else bjs[c+j]=bjs[c+j]-js[j]+48;
		}
		for(j=0;;j++)if(bjs[j]!=48)break;
		for(k=j;k<strlen(bjs);k++)printf("%c",bjs[k]);
		putchar(10);
		}
		else printf("0\n");
	}
}