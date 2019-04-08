int sushu(int a)
{   int i,k,t;
    k=(int)sqrt(a);
    for(i=3;i<=k;i=i+2)
  { if(a%i!=0&&a%2!=0)
    t=1;
    else 
    {t=0;break;
}
         }  
    return t;
}
int check(int a)
{     int t,b[100],k;
      int i;
      for(i=1;a!=0;i++)
      {b[i]=a%10;
        a=a/10;
        k=i;
                   }   
    for(i=1;i<=k/2;i++)
    if(b[i]==b[k-i+1])
      t=1;
    else 
    {t=0;break;}
    return t;
}
main()
{   int n,m;
    scanf("%d%d",&n,&m);
    int i,con=0;
    for(i=n;i<=m;i++)
    {if(check(i)==1&&sushu(i)==1&&con!=0)
      {   printf(",%d",i);
         con++;            }
    if(check(i)==1&&sushu(i)==1&&con==0)
     {printf("%d",i);
      con++;
     } 
}
   if(con==0)
   printf("no");
     }
