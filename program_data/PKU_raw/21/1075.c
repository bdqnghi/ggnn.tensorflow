int main()
{
   int i,j,n,x,sum=0,a[300]={0};
   double average,b[300]={0},t;
   cin>>n;
   for(i=0;i<n;i++)
    {cin>>a[i];
    sum=sum+a[i];}
     for(i=0;i<n-1;i++)
       for(j=0;j<n-1-i;j++)
         if(a[j]>a[j+1])
           {
            x=a[j];a[j]=a[j+1];a[j+1]=x;
           }
   for(i=0;i<n;i++)
    {
      average=(sum+0.0)/n;
    }
    for(i=0;i<n;i++)
     {
       b[i]=abs(a[i]-average);
     }
     for(i=0;i<n-1;i++)
       for(j=0;j<n-1-i;j++)
        { if(b[j]<b[j+1])
           {
            t=b[j];b[j]=b[j+1];b[j+1]=t;
            x=a[j];a[j]=a[j+1];a[j+1]=x;
            }
        } 
     for(i=0;i<n;i++)
      {
        if(b[i+1]!=b[i]){cout<<a[i]<<endl;break;}
        else  cout<<a[i]<<",";
      }
      return 0;
}
    
