void main()
{
	char s[2000];int num=0,i,j,temp1,temp2,len;int b[300];
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<300;i++)
		b[i]=0;
	for(i=0,j=0;i<len;i++)
	{   if(s[i]!=',')
		{
			b[j]=b[j]*10+s[i]-'0';
		}
		if(s[i]==',')j++;
	}
	num=j+1;
    if(num==1)printf("No");
	else 
	{
	for(i=1;i<num&&b[0]==b[i];i++);
	if(i==num)printf("No");
	else
	{
		for(i=0,temp1=b[0];i<num;i++)
			if(temp1<b[i])temp1=b[i];
		for(i=0,temp2=b[0];i<num;i++)
			if(temp2>b[i])temp2=b[i];
		for(i=0;i<num;i++)
			if(b[i]<temp1&&temp2<b[i])temp2=b[i];
		printf("%d",temp2);
	}
	}

}
