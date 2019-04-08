int main()
{
   int n,i;
   int a[10000],b[10000];
   cin>>n;
   for(i=0;i<n;i++)
   {
       int c[100],j;
       cin>>a[i];
       if(a[i]==0) {b[i]=60;continue;}
       for(j=1;j<=a[i];j++)
       {
           cin>>c[j];
       }
       c[a[i]+1]=111;
      for(j=1;j<=a[i];j++)
      {
          if((c[j]+(j-1)*3)<=57&&(c[j+1]+(j)*3)>57)
          {
              if((c[j+1]+(j-1)*3)>60) b[i]=60-j*3;
              else b[i]=60-j*3-(60-c[j+1]-j*3);
              break;
          }
      }
   }
   for(i=0;i<n;i++) cout<<b[i]<<endl;
   return 0;
}
