int main()
{
  int a[4],z,q,s,l,i,j,m,n;
  for(i=0;i<4;i++)
  {
    a[i]=10;
    for(j=0;j<4;j++)
    {
     if(j==i)
      {continue;}
      a[j]=40;
      for(m=0;m<4;m++)
      {
         if((m==i)||(m==j))
         {continue;}
         a[m]=30;
             for(n=0;n<4;n++)
             {
              if((n==i)||(n==j)||(n==m))
              {continue;}
               a[n]=20;
               z=a[0];
               q=a[1];
               s=a[2];
               l=a[3];
               if((((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))==1)
               {
               printf("l %d\n",l);
               printf("q %d\n",q);
               printf("z %d\n",z);
               printf("s %d\n",s);
               }
              } 
       }
    }
  }
  for(i=0;i<4;i++)
  {
    a[i]=10;
    for(j=0;j<4;j++)
    {
     if(j==i)
      {continue;}
      a[j]=50;
      for(m=0;m<4;m++)
      {
         if((m==i)||(m==j))
         {continue;}
         a[m]=30;
             for(n=0;n<4;n++)
             {
              if((n==i)||(n==j)||(n==m))
              {continue;}
               a[n]=20;
               z=a[0];
               q=a[1];
               s=a[2];
               l=a[3];
               if((((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))==1)
               {
               printf("l %d\n",l);
               printf("q %d\n",q);
               printf("z %d\n",z);
               printf("s %d\n",s);
               }
              } 
       }
    }
  }
  for(i=0;i<4;i++)
  {
    a[i]=10;
    for(j=0;j<4;j++)
    {
     if(j==i)
      {continue;}
      a[j]=40;
      for(m=0;m<4;m++)
      {
         if((m==i)||(m==j))
         {continue;}
         a[m]=50;
             for(n=0;n<4;n++)
             {
              if((n==i)||(n==j)||(n==m))
              {continue;}
               a[n]=20;
               z=a[0];
               q=a[1];
               s=a[2];
               l=a[3];
               if((((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))==1)
               {
                printf("l %d\n",l);
               printf("q %d\n",q);
               printf("z %d\n",z);
               printf("s %d\n",s);
               }
              } 
       }
    }
  }
  for(i=0;i<4;i++)
  {
    a[i]=10;
    for(j=0;j<4;j++)
    {
     if(j==i)
      {continue;}
      a[j]=40;
      for(m=0;m<4;m++)
      {
         if((m==i)||(m==j))
         {continue;}
         a[m]=30;
             for(n=0;n<4;n++)
             {
              if((n==i)||(n==j)||(n==m))
              {continue;}
               a[n]=50;
               z=a[0];
               q=a[1];
               s=a[2];
               l=a[3];
               if((((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))==1)
               {
                printf("l %d\n",l);
               printf("q %d\n",q);
               printf("z %d\n",z);
               printf("s %d\n",s);
               }
              } 
       }
    }
  }
  for(i=0;i<4;i++)
  {
    a[i]=50;
    for(j=0;j<4;j++)
    {
     if(j==i)
      {continue;}
      a[j]=40;
      for(m=0;m<4;m++)
      {
         if((m==i)||(m==j))
         {continue;}
         a[m]=30;
             for(n=0;n<4;n++)
             {
              if((n==i)||(n==j)||(n==m))
              {continue;}
               a[n]=20;
               z=a[0];
               q=a[1];
               s=a[2];
               l=a[3];
               if((((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))==1)
               {
               printf("l %d\n",l);
               printf("q %d\n",q);
               printf("z %d\n",z);
               printf("s %d\n",s);
               }
              } 
       }
    }
  }
  //getchar();
 // getchar();
  return 0;
}
