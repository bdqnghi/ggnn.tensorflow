int main()
{
   int r=0,p,q,n,k=0;
   char a;
   while(a!=10)
  {
     scanf("%d",&n);
     a=getchar();
     k=k+1;
     r=r+1;
     if(k==1)
      {q=n;p=0;}
     else if(k==2)
      {if(n<=q)
        {p=n;}
        else
          {p=q;q=n;}}
      else
        {
           if(n>=p&&n<=q)
             {if(n==q)
                 {p=p;q=n;}
               else
                  {p=n;q=q;}} 
           else if(n<p)
               {if(p==q)
                   {p=n;q=q;}
                 else
                 {p=p;q=q;}}
           else
              {if(p==q)
                 {p=p;q=n;}
                else
                {p=q;q=n;}}
          }
     }
    if(r==1)
      printf("No");
    else if(p==q)
      printf("No");
    else
      printf("%d",p);
   return 0;
}
                 
  
         
         