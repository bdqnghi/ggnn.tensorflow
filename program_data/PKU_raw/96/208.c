int main()
{
	char s[100];
	int a[100]={0},i,len,count=0,num=1;
	gets(s);
	len=strlen(s);
	if(len==1)
	{printf("0\n%d",s[0]-48);}
	else if(len==2&&(s[0]-48)*10+(s[1]-48)<13)
		printf("0\n%d",(s[0]-48)*10+s[1]-48);
	else
	{for(i=0;i<len;i++)
		s[i]=s[i]-48;
	if(s[0]*10+s[1]>=13)
	{for(i=0;i<len&&count<len-1;i++)
	{a[count]=(s[i]*10+s[i+1])/13;
	s[i+1]=(s[i]*10+s[i+1])%13;
	count++;
	}
     for(i=0;i<count;i++)
		printf("%d",a[i]);
	 printf("\n%d",s[i+1]);
	}
	else 
	{a[0]=(s[0]*100+s[1]*10+s[2])/13;
	s[2]=(s[0]*100+s[1]*10+s[2])%13;
     for(i=2;i<len&&num<(len-2);i++)
	{a[num]=(s[i]*10+s[i+1])/13;
	s[i+1]=(s[i]*10+s[i+1])%13;
	num++;
	 }
	for(i=0;i<num;i++)
		printf("%d",a[i]);
	printf("\n%d",s[i+1]);
	}
	}
	return 0;
}


