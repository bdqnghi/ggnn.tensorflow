
int mpow(int a,int b)
{
    int i,c=1;
    for(i=0;i<b;i++)c*=a;
    return c;
}


main()
{ 
	char a[10],d[10],c;
	int aa[10],b[10];
	int m=0,n=0,i=0,t=0,l=0,j=0,h=0;
	int s=0;
	
        scanf("%d%s%d",&m,a,&n);
	i=strlen(a);
	
        for(t=0;t<i;t++)
	{
		if(a[t]>=65 && a[t]<=90)
			aa[t]=a[t]-55;
	}
	
        for(t=0;t<i;t++)
	{
		if(a[t]>=97 && a[t]<=122)
			aa[t]=a[t]-87;
	}
	
        for(t=0;t<i;t++)
	{
		if(a[t]>=48 && a[t]<=57)
			aa[t]=a[t]-48;
	}
	


        for(h=0;h<i;h++)
	{
		t=aa[h]*mpow(m,i-h-1);
		s=s+t;
	}
	
	j=0;

	if (s==0)
		printf("0");

	while(s>=1)
	{
                b[j]=s%n; 
		j++;
		s=s/n;
	}
	
        j--;
	
        for(l=j;l>=0;l--)
	{
		if (b[l]>9) d[l]=b[l]+'A'-10;
		else d[l]=b[l]+'0';
	}
	
	for(l=j;l>=0;l--)
		printf("%c",d[l]);
	    printf("\n");
	
	
}