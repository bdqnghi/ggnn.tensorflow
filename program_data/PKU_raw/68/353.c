main()
{long int i,j,k,n,n_,a,b,c;
scanf("%d",&n);
 for(k=6;k<=n;k+=2) 
 {n_=k;j=1;
   do 
   {c=0;
    j=j+2;
    a=j;
    b=n_-j;
    for(i=3;i<=sqrt(a);i=i+2) 
    if(a%i==0) c=1;
    for(i=3;i<=sqrt(b);i=i+2) 
	if(b%i==0) c=1;
   }
 while(c==1);
 printf("%d=%d+%d\n",n_,a,b);
 }
}