void main()
{
	int a,b,l1,i,j=0,t,m=0,n;
	char str1[100],str2[100];
	scanf("%d%s%d",&a,str1,&b);
	l1=strlen(str1);
	if(str1[0]=='0')
		printf("0");
    for(i=0;i<l1;i++)
	{if(str1[i]<='z'&&str1[i]>='a')
	t=str1[i]-'a'+10;
	else if(str1[i]<='Z'&&str1[i]>='A')
		t=str1[i]-'A'+10;
	else
		t=str1[i]-'0';
	m=m*a+t;
	}
	while(m!=0)
	{
		n=m%b;
		m=m/b;
		if(n>=10)
			str2[j]=n-10+'A';
			else str2[j]=n+'0';
		j++;
	}
	for(i=0;i<j;i++)
		str1[i]=str2[j-i-1];
	str1[j]='\0';
	printf("%s",str1);

}

