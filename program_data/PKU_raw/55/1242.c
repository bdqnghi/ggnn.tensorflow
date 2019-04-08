void main()
{   
	int a,b,k,i,m,j,n,o;
	long ten=0;
	char x[32]="\0"; char y[32]="\0";
    scanf("%d %s %d",&a,x,&b);
	k=strlen(x);
	for(i=0;i<k;i++)
	{   
		ten=a*ten;
		if(x[i]<60)
		ten=ten+(x[i]-48);
		else if(x[i]<95) ten=ten+(x[i]-55);
		else ten+=(x[i]-87);
	}
	j=0;
	do{
		m=ten%b;
		ten=(ten-m)/b;
		if(m<10) y[j]=m+48;
		else y[j]=m+55;
		j++;
	}
	while(ten!=0);
        n=strlen(y);
	for(o=n-1;o>=0;o--)
	{
		printf("%c",y[o]);
	}
}