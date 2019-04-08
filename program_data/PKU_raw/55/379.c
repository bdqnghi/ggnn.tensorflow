void main()
{
	int a,b,len,len2,i,j=0,m=1,k;
	char c,str[50]={0},str2[50]={0};
	long n=0;
	scanf("%d",&a);
	scanf("%s",str);
	scanf("%d",&b);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]<='z')&&(str[i]>='a'))k=str[i]-87;
		else if((str[i]<='Z')&&(str[i]>='A'))k=str[i]-55;
		else if((str[i]<='9')&&(str[i]>='0'))k=str[i]-48;
		n=a*n+k;
	}
	while(m!=0)
	{
		str2[j]=n%b;
        if((str2[j]<=35)&&(str2[j]>=10))str2[j]+=55;
		else if((str2[j]<=9)&&(str2[j]>=0))str2[j]+=48;
		n=n/b;
		m=n;
		j++;
	}
	len2=strlen(str2);
	for(j=len2-1;j>=0;j--)printf("%c",str2[j]);
	printf("\n");
}