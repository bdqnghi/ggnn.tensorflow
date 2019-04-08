void main()
{
	int from,to;
	char num[33],result[33]={0};
	long dec=0;
	int i,j;
	scanf("%d%s%d",&from,num,&to);
    if (num[0]=='0') printf("0");
	else 
	{
		//??10??
		for(i=0;i<strlen(num);i++)
		{
			dec*=from;
			if (num[i]>='0' && num[i]<='9')
				dec=dec+num[i]-'0';
			else if (num[i]>='A' && num[i]<='Z')
				dec=dec+num[i]-'A'+10;
			else if (num[i]>='a' && num[i]<='z')
				dec=dec+num[i]-'a'+10;
		}
		//??????
		if (to==10)
			printf("%d",dec);
		else
		{
			int digit;
			i=0;
			while(dec!=0)
			{
				digit=dec%to;
				if (digit>=0 && digit<=9)
					result[i]=digit+'0';
				else
					result[i]=digit-10 +'A';
				i++;
				dec=(dec-digit)/to;
			}
			//????
			for(j=strlen(result)-1;j>=0;j--)
				putchar(result[j]);
				
		}
	}
}
