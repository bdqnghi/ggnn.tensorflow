int power(int x,int y)
{
    int i,z=1;
    for (i=1;i<=y;i++) z=z*x;
    return z;
}

int main()
{
      int a=0,b=0,i=0,j=0,count=0,k=0,l=0;
      char p[64],s[64];
      int q[64],r[64];
      long n=0;
      
      for(i=0;i<64;i++)
      {
          p[i]=0;
          q[i]=0;
          r[i]=0;
          s[i]=0;
      }
      
      scanf("%d ",&a);
      scanf("%s",p);
      scanf(" %d",&b);          //scanf
      
      for (j=0;j<64;j++)
      {
          if (p[j]>=48 && p[j]<=57) q[j]=p[j]-48;
          if (p[j]>=65 && p[j]<=90) q[j]=p[j]-55;
          if (p[j]>=97 && p[j]<=122) q[j]=p[j]-87;
      }
      
      for (j=0;j<64;j++) 
      {
          if(q[j] != 0) count=j;
      }
      
      for (i=count;i>=0;i--)
      {
          n = n + q[count-i]*power(a, i);
      }                                 //??????n

      do 
      {
                 r[k]=n%b;
                 n=n/b;  
                 k++;        
      }
      while(n>0);                //???b?? 
      
      for(l=k-1;l>=0;l--)
      {
          if (r[l]>=0 && r[l]<=9) s[l]=r[l]+48;
          if (r[l]>=10 && r[l]<=35) s[l]=r[l]+55;  
          printf("%c",s[l]);        
      }

}