void main()
{
     long int i,iii,temp;
     int j,m,n,a[100]={0},w=0,k=0;
     scanf("%d %d",&m,&n);
     for(i=m;i<=n;i++)
     {
           temp=0;
           iii=i;
           while(iii!=0)
           {
                 temp=temp*10;
                 temp=temp+iii%10;
                 iii=iii/10;
           }
           if(i==temp)
           {
                 w=0;
                 for(j=2;j<=(i/2);j++)
                 {
                     if((i%j)==0)
                     {     w=1; break;  }
                 }
                 if(w==0) 
                 {
                      a[k]=i;
                      k++;
                 }
            }
     }
     if(k==0)  printf("no");
     if(k==1)  printf("%d",a[0]);
     int tt;
     if(k>1)
     {
           for(j=0;j<(k-1);j++)
          {
               for(i=0;i<(k-1-j);i++)
               {
                   if(a[i]>a[i+1])
                   {
                         tt=a[i];
                         a[i]=a[i+1];
                         a[i+1]=tt;
                   }
               }
          }
          for(i=0;i<k;i++)
          {
               printf("%d",a[i]);
               if(i!=(k-1))
                  printf(",");
          }
     }
}