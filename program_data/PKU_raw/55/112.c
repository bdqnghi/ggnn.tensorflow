void main()
{
	int a,b,i,expa,expb;
	long temp=0;
	char r[65];
	char n[65]={0};
	scanf("%d %s %d",&a,n,&b);
	expa=strlen(n);
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]>='a') n[i]+=-87;
		else if(n[i]>='A') n[i]+=-55;
		else n[i]+=-48;
		temp+=n[i]*(int)pow(a,expa-1-i);
	}
	if(temp==0)
		printf("0");
	else
	{
		expb=(int)(log(temp)/log(b))+1;
		for(i=0;i<expb;i++)
		{
			r[i]=(temp%(int)(pow(b,expb-i)))/(int)pow(b,expb-1-i);
			if(r[i]>=10) r[i]+=55;
			else r[i]+=48;
			printf("%c",r[i]);
		}
	}
printf("\n");
}