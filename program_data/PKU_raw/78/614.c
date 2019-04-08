int main()
{
 int a[4];
 char n[4]={'z','q','s','l'};
 for(a[0]=10;a[0]<=50;a[0]+=10)
  for(a[1]=10;a[1]<=50;a[1]+=10)
   if(a[1]!=a[0])
   for(a[2]=10;a[2]<=50;a[2]+=10)
    if(a[2]!=a[1]&&a[2]!=a[0])
    for(a[3]=10;a[3]<=50;a[3]+=10)
     if(a[3]!=a[0]&&a[3]!=a[1]&&a[3]!=a[2])
      if(a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[2]+a[1]&&a[0]+a[2]<a[1])
      {
       for(int i=0;i<3;i++)
        for(int j=i+1;j<4;j++)
         if(a[i]<a[j])
         {
          int t;char c;
          t=a[i];a[i]=a[j];a[j]=t;
          c=n[i];n[i]=n[j];n[j]=c;
         }
       for(int i=0;i<4;i++)
        cout<<n[i]<<' '<<a[i]<<endl;
      }
 return 0;
}