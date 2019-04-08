main()
{
   char a[250]={'0'},b[250]={'0'},c[1000],p;
   int i,j,k,x,y,m,n,q,max;
   scanf("%s",a);
   scanf("%s",b);
   m=strlen(a);
   n=strlen(b);
   
   if(a[0]=='0'&&b[0]=='0'&&m==1&&n==1)
  printf("0");
   else{
   if(m<n)
            {   k=n-m;
                for(i=m-1;i>=0;i--)
                {a[i+k]=a[i];
                }
                for(i=0;i<=k-1;i++)
                {a[i]='0';}
            }
       else  {k=m-n;
               for(i=n-1;i>=0;i--)
                    {b[i+k]=b[i];}
                    for(i=0;i<=k-1;i++)
                        {b[i]='0';}
               }
            
  if(m<=n)
  {m=n;}
  for(j=m-1;j>=1;j--)
   { p=a[j]+b[j]-'0';
        if(p>'9')
       {b[j-1]=b[j-1]+1;
     c[j]=p-10;}
     else c[j]=p;
     
   }
    p=a[0]-'0'+b[0];
    if(p>'9')
    {p='1';
    c[0]=a[0]+b[0]-'0'-10;}
    else{p='\0';
         c[0]=a[0]+b[0]-'0';}
    for(i=0,k=0;i<=m-1;i++){if(c[i]=='0') k=k+1;else break;}
    if(p=='1')
    {printf("%c",p);for(i=0;i<=m-1;i++) printf("%c",c[i]);}
    else{
    for(i=k;i<=m-1;i++)
    printf("%c",c[i]);}}
         }
