struct book
{
	int num;
	char str[26];
}bk[1000];
void main()
{
	int m,i,j,k,s,n=0;
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','W','X','Y','Z'};
	int b[26]={0};
	scanf("%d",&m);
    for(i=0;i<m;i++)
		scanf("%d %s",&bk[i].num,bk[i].str);
	for(i=0;i<m;i++)
		for(j=0;j<strlen(bk[i].str);j++)
			for(k=0;k<26;k++)
				if(a[k]==bk[i].str[j])
					b[k]++;
				for(i=0;i<26;i++)
					if(b[i]>n)
					{
						n=b[i];
						s=i;
					}
					printf("%c\n%d\n",a[s],b[s]);
					for(i=0;i<m;i++)
						for(j=0;j<strlen(bk[i].str);j++)
							if(bk[i].str[j]==a[s])
								printf("%d\n",bk[i].num);
}
