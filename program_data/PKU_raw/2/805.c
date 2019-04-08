void main()
{
    int len[1000];
	int b[26];
	int a[1000];
	char str[1000][26];
	int m,i,j,max,num;
	char c;
	int pos,temp;



    scanf("%d",&m);
	for(i=0;i<26;i++)
		b[i]=0;
	for(i=0;i<m;i++)
	{
		scanf("%d ",&a[i]);
		scanf("%s",str[i]);
		len[i]=strlen(str[i]);
		for(j=0;j<len[i];j++)
		{
			temp=str[i][j]-'A';
			b[temp]++;
		}
	}

    max=b[0];
	pos=0;
	for(i=1;i<26;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			pos=i;
		}
	}
    c=pos+'A';
    printf("%c\n",c);
	printf("%d\n",max);
	num=0;
    	for(i=0;i<m;i++)
		for(j=0;j<len[i];j++)
			if(str[i][j]==c)
			{
				num++;
				if(num<max)
					printf("%d\n",a[i]);
				else printf("%d",a[i]);
			}
} 