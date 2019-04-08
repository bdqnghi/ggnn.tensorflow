 
main()
{
      int b[100],c[100],n,i,m,j,k,t;
      char a[100] ;
      gets(a);
      k=strlen(a)-1;
       
      b[0]=0;b[1]=0;
       for(j=0;j<=k;j++)
           b[j]=a[j]-'0';
 c[1]=0; 
    t=b[0]*10+b[1];
       if(k<1)
        printf("0\n%d\n",b[0]);
        
   if(k==1&&t<13)
  printf("0\n%d\n",t);
  else if(k==1&&t>=13)
  printf("%d\n%d\n",t/13,t%13);
          else if( k>1&&(10*b[0]+b[1])<13)
          { for(m=2;m<=k;m++)
           { 
              t=t*10+b[m];
              c[m]=t/13;
              t=t%13;
           }
              for(m=2;m<=k;m++)
            printf("%d",c[m]);
            printf("\n");
            printf("%d\n",t);}

        else if(k>1&&(10*b[0]+b[1])>=13)
          { for(m=1,t=b[0];m<=k;m++)
           { 
              t=t*10+b[m];
              c[m]=t/13;
              t=t%13;
           }
            for(m=1;m<=k;m++)
            printf("%d",c[m]);
            printf("\n");
            printf("%d\n",t);}

           else return 0;

                       
        
}           
            
             
