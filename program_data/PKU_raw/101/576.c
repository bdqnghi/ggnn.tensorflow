int main()
{
    int a,b,c,m,n,p,i,j;
   
    for(a=1;a<=3;a++)
      for(b=1;b<=3;b++)
       if(b==a)
       continue;
       else
         for(c=1;c<=3;c++)
          if(c==a||c==b)
            continue;
          else
         {m=(a<b)+(a==c); 
          n=(a>b)+(a>c);
          p=(c>b)+(b>a);
          if(((a+m)==3)&&((b+n)==3)&&((c+p)==3))
         { int u[3]={a,b,c},x;
          char k[3]={'A','B','C'},y;
          for(i=0;i<=2;i++)
           for(j=0;j<=1;j++)
            if(u[j]>u[j+1])
             {x=u[j+1],u[j+1]=u[j],u[j]=x,
             y=k[j+1],k[j+1]=k[j],k[j]=y;}
             else continue;
          cout<<k[0]<<k[1]<<k[2];}
          else continue;}
         
     return 0;
     }
      