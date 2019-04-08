int main()
{
    int sum=0,m=0,a[4];
    char n,b[4];
    b[0]='z';
    b[1]='q';
    b[2]='s';
    b[3]='l';
    memset( a, 0,sizeof(a) );
    for(int A=1;A<6;A++)
    {
      for(int B=1;B<6;B++)
      {
         for(int C=1;C<6;C++)
         {
            for(int D=1;D<6;D++)
            {
               if((C!=A)&&(C!=B)&&(A!=B)&&(D!=A)&&(D!=B)&&(D!=C))
               {
                 sum=((A+B)==(C+D))+((A+D)>(B+C))+((A+C)<B);
                 if(sum==3)
                 {
                   a[0]=10*A;
                   a[1]=10*B;
                   a[2]=10*C;
                   a[3]=10*D;
                   for(int j=1;j<=3;j++)
                   {
                     for(int i=0;i<=3-j;i++)
                     {
                       if(a[i]<a[i+1])
                       {
                         m=a[i];
                         a[i]=a[i+1];
                         a[i+1]=m;
                         n=b[i];
                         b[i]=b[i+1];
                         b[i+1]=n;
                       }
                     }
                   }
                   cout<<b[0]<<" "<<a[0]<<endl;
                   cout<<b[1]<<" "<<a[1]<<endl;
                   cout<<b[2]<<" "<<a[2]<<endl;
                   cout<<b[3]<<" "<<a[3]<<endl;
                 }
               }
            } 
         }
      }                                
    }
    return 0;
}