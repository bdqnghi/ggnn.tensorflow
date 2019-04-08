int main()
{
	int yu=0,yu0=0,he=0,i,n,sum;
	char str1[260],str2[260],str0[260],stra[260],strb[260],res[260];

	scanf("%s%s",str1,str2);

	if (strlen(str1)==strlen(str2))
	{
		strcpy(stra,str1);
		strcpy(strb,str2);
		goto final;
	}
	if (strlen(str1)>strlen(str2))
	{
		strcpy(stra,str1);
		strcpy(str0,str2);
	}
	else 
	{
		strcpy(stra,str2);
		strcpy(str0,str1);
	}                           //???stra??????str0?????strb??0???str0???final??


	n=strlen(stra)-strlen(str0);
	for (i=0;i<=n-1;i++)
		strb[i]='0';
	strb[n]='\0';
	strcat (strb,str0);        //???stra?strb?????????

final:

	i=strlen(stra)-1;
	for (i=i;i>=0;i--)
	{
		he=stra[i]+strb[i]-'0'-'0'+yu;
		yu0=he/10;
		if (he/10!=0)
			he=he%10;
		res[i+1]=he+'0';
		yu=yu0;
	}
	res[strlen(stra)+1]='\0';
	res[0]=yu+48;                     //res?????????0
	
	for (i=0;i<=strlen(stra);i++)
	{
		sum=i;
		if (res[i]!='0')
			break;
	}
	for (i=sum;i<=strlen(stra);i++)
		printf("%c",res[i]);
	
	return 0;
}
