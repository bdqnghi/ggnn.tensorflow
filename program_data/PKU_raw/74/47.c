void main()
{
    long m,n,i,a,b;
	int r=0,k,l,d,t,j;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
	{   t=1;
        for(j=2;j<=i/2;j++)
			if(i%j==0) {t=0; break;}       
        if(t==1)
        d=(int)log10(i)+1;
        for(k=1;k<=d/2+1;k++)
		   {a=i; b=i;
		    for(l=1;l<=k-1;l++)
				a=a/10;
			for(l=1;l<=d-k;l++)
				b=b/10;
			a=a%10; b=b%10;
			if(a!=b) {t=0; break;}}
		if(t==1) if(r==0) {printf("%d",i); r=1;}
		         else printf(",%d",i); }
   if(r==0) printf("no");
   printf("\n");
}