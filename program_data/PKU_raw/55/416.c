void main()
{
	int a,b,i,m,e,f,d=1,c=0;
	char n[1000]={0},k[1000]={0};
	scanf("%d",&a);
	scanf("%s",n);
	scanf("%d",&b);
	m=strlen(n);
    for(i=0;i<m;++i)
	{
		if(n[i]>=65&&n[i]<=90)
			n[i]=n[i]-55;
		if(n[i]>=97&&n[i]<=122)
			n[i]=n[i]-87;
		if(n[i]>=48&&n[i]<=57)
			n[i]=n[i]-48;
		c=c*a+n[i];
			}
         if(c==0) printf("0\n");
	for(i=0;c>0;++i)
	{
		e=c%b;
		if(e>=10&&e<=35) 
       e=e+55;
       if(e>=0&&e<=9) 
       e=e+48;
	  c=(c-c%b)/b;
	    k[i]=e;
	}
	 f=strlen(k);
	 for(i=0;i<f;++i)
	 
     { if(k[i]!='\0')
       printf("%c",k[f-1-i]);}
           
}
