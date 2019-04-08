main()
{ 
    char N[100];int n[100],a[100],b[100];int k,m,e;
    char c[11]={'0','1','2','3','4','5','6','7','8','9'};
    scanf("%s",N);
    for(k=0;k<100;k++)
    {if(N[k]=='\0')   
       break;}
    for(m=0;m<=9;m++)
    {for(e=0;e<k;e++)
    {if (N[e]==c[m])
     n[e]=m;}}
    if(k==1)  printf("%d\n%d",0,n[0]);
    if(k==2&&n[0]*10+n[1]<13)
     printf("%d\n%d",0,n[0]*10+n[1]);
    if(k==2&&n[0]*10+n[1]>=13)
printf("%d\n%d",(n[0]*10+n[1])/13,(n[0]*10+n[1])%13);
    if(k>2)
     {b[0]=n[0];
     a[0]=(b[0]*10+n[1])/13; 
     if(a[0]!=0)printf("%d",a[0]);
     for(e=0;e<k-1;e++)
     { b[e+1]=(10*b[e]+n[e+1])%13;}
     for(e=1;e<k-1;e++)
     {a[e]=(b[e]*10+n[e+1])/13;
     printf("%d",a[e]);} printf("\n%d",b[k-1]);}
   getchar();getchar();getchar();getchar();getchar();getchar(); getchar();getchar();
}