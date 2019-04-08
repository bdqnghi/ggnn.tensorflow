struct string{
	char a[6];
	int num;
}sub[1000];
void main()
{
	char str1[10],str[1000];
	int n;
	int i,j,k,l;
	int jishu,zonshu1=0,zonshu2=0;
	int max;
	int len;
	scanf("%d",&n);
	gets(str1);
	gets(str);
	for(i=0;i<n;i++) sub[999].a[i]='0';
	len=strlen(str);
	for(i=0;i<=len-n;i++)
	{
		for(j=0;j<n;j++) {sub[i].a [j]=str[i+j];sub[i].num=0;}
		for(k=0;k<=len-n;k++)
		{   
			jishu=0;
			for(l=0;l<n;l++)
			{
				if(str[k+l]==sub[i].a[l]) jishu++;
			}
			if(jishu==n) sub[i].num++;
		}
	}
	max=sub[0].num;
    for(i=0;i<=len-n;i++) max=(max>sub[i].num)?max:sub[i].num;
	if(max==1) printf("NO");
	else
	{
	for(i=0;i<=len-n;i++) {if(sub[i].num==max) zonshu1++;} 
    for(i=0;i<=len-n;i++)
	{
		if(strcmp(sub[i].a,sub[999].a)!=0&&sub[i].num==max)
		{
			for(j=i+1;j<=len-n;j++)
			{
				if(strcmp(sub[j].a,sub[i].a)==0&&sub[j].num==max)
				 strcpy(sub[j].a,sub[999].a);
			}
		}
	}
	for(i=0;i<=len-n;i++)
		if(strcmp(sub[i].a,sub[999].a)!=0&&sub[i].num==max) zonshu2++;
	printf("%d\n",zonshu1/zonshu2);
	for(i=0;i<=len-n;i++)
		if(strcmp(sub[i].a,sub[999].a)!=0&&sub[i].num==max) printf("%s\n",sub[i].a);
	}
}
