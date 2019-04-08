int main()
{
	int a,b,i,j,wa,wb,t=1;
	long dec=0,x,y;
	char n[100],m[100];
	scanf("%d%s%d",&a,n,&b);
	wa=strlen(n);
	for(i=0;i<=wa-1;i++)
		if(n[i]!=48) {t=0; break;}
    if(t==1) printf("0\n");
	else
	{for(i=0;i<=wa-1;i++)
	{if(n[i]>=48&&n[i]<=57) 
     {x=n[i]-48;
	  for(j=1;j<=wa-i-1;j++)
	     x=x*a;
	  dec=dec+x;}
	 if(n[i]>=65&&n[i]<=90)
     {x=n[i]-55;
	  for(j=1;j<=wa-i-1;j++)
	  x=x*a;
	  dec=dec+x;}
	 if(n[i]>=97&&n[i]<=122)
	 {x=n[i]-87;
	  for(j=1;j<=wa-i-1;j++)
         x=x*a;
	  dec=dec+x;}
	} 
	wb=(int)(log(dec)/log(b))+1;
	for(i=0;i<=wb-1;i++)
	{y=dec;
	 for(j=1;j<=wb-i-1;j++)
        y=y/b;
     y=y%b;
	 if(y>=0&&y<=9) m[i]=y+48;
	 else m[i]=y+55;}
	 for(i=0;i<=wb-1;i++)
         printf("%c",m[i]);
	 printf("\n");}
    return(0);
}