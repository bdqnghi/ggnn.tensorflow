int main()
{
    int n,t,i,j;
    int a[200],b[200],length=1;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    a[0]=2;
    cin>>n;
   if(n==0) cout<<1;
   else
  {  
    for(t=1;t<n;t++)
       {
         for(i=0;i<=length-1;i++)
         {
           b[i]=a[i]*2+b[i];
           if(b[i]>=10)
              { b[i+1]=b[i+1]+1; b[i]=b[i]-10;}
         }
       for(i=199;i>=0;i++)
         if(b[i]!=0)
          {length=i;break;}
       for(i=0;i<=199;i++)
          {a[i]=b[i];b[i]=0;}
       }
    for(i=199;i>=0;i--)
     if(a[i]>0)
       break;
    for(j=i;j>=0;j--)
      cout<<a[j];}
      
      return 0;
}
       
