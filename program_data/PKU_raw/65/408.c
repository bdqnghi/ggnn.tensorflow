 
main()
{
      int n,i,j, c,d;
      int a=0,b=0;
      scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%d%d",&c,&d);
      if(c==0&&d==1)a++;
   if(c==0&&d==2)b++;
       if(c==1)
     {if(d==0)b++;
     else if(d==2)a++;
     }
    else  if(c==2)
     {if(d==0)a++;
     if(d==1)b++;}
                          
     }
                          if(a>b)printf("A");
                          else if(a<b)printf("B");
                          else printf("Tie");
       }

