
main()
{
      int a[5][5];
      int i,j;
      int x,y,z,w,s,q,p=0;
      for(i=0;i<5;i++)
      {
        for(j=0;j<5;j++)
        {
           scanf("%d",&a[i][j]);
        }
      }
      for(i=0;i<5;i++)
      {
        for(j=0;j<5;j++)
        {
           w=a[i][j];
           x=i;y=j;
           for(s=0;s<5;s++)
           {if(a[i][s]>=w)
            w=a[i][s];}
           if(w==a[i][j])
             { q=a[i][j];
               for(s=0;s<5;s++)
               {if(a[s][j]<=q)
                 q=a[s][j];}
                  if(q==a[i][j])
                    {printf("%d %d %d\n",x+1,y+1,w);  
                     p=p+1;} 
             }
        }   
      }
       if(p==0)
       printf("not found"); 
       
}


