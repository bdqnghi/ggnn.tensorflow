int main()
{
	char as[201],bs[201];
	int a[201],b[201],sum[201];
	int lena,lenb,len,jinwei=0;
	int i,j;
	scanf("%s %s",as,bs);
	lena=strlen(as);
	lenb=strlen(bs);
	len=lena>lenb?lena:lenb;
         memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(i=200;i>200-lena;i--)
		a[i]=as[lena-201+i]-'0';
	for(i=200;i>200-lenb;i--)
		b[i]=bs[lenb-201+i]-'0';
	for(i=200;i>200-len-1;i--)
	{
		sum[i]=(jinwei+a[i]+b[i])%10;
		jinwei=(jinwei+a[i]+b[i])/10;
	}
	for(i=200-len;i<=200;i++)
	{
		if(sum[i]!=0)
		{
			for(j=i;j<=200;j++)
				printf("%d",sum[j]);
                       break;
		}
else if(i==200)
printf("0\n");	
	}
}

