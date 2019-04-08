main()
{
      int n;
      scanf("%d",&n);
      int i1,i2,j,a,b,c,d,e=0,y[100000];
      j=0;
      for(i1=0;;i1++)
      {
                     scanf("%d %d",&a,&b);
                     y[j]=b;
                     j++;
                     if(a==0&&b==0)
                     break;
      }
      for(c=n-1;c>=0;c--)
      {
                         d=0;
                         if(c>=1)
                         {
                                 for(i2=j-1;i2>=0;i2--)
                                 {
                                                       if(y[i2]==c)
                                                       d++;
                                 }
                                                       if(d==n-1)
                                                       {
                                                                 printf("%d",c);
                                                                 e++;
                                                       }
                                 
                         }
                         else
                         {
                                 for(i2=j-1;i2>=0;i2--)
                                 {
                                                       if(y[i2]==0)
                                                       d++;
                                 }
                                                       if(d==n)
                                                       {
                                                               printf("0");
                                                               e++;
                                                       }
                                  
                         }
      }
      if(e==0)
      printf("NOT FOUND");
}
