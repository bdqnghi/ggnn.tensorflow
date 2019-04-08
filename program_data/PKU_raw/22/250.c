void main()
{
    char str[2000];
	gets(str);
	int l=strlen(str),i,sum[600]={0},num=0;
	for(i=0;i<l;i++)
	{
	    if(str[i]!=',') sum[num]=sum[num]*10+str[i]-'0';
		else num=num+1;
	}
	int max=0,s=0;
	for(i=0;i<=num;i++)
		if(sum[i]>max) max=sum[i];
    for(i=0;i<=num;i++)
		if(sum[i]>s&&sum[i]<max) s=sum[i];
    if(s==0) printf("No");
	else printf("%d",s);
}