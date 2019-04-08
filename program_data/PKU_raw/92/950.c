 int i2=0,j2=0;
  int i1;
  int j1; 
 int sum; 
int a[1000];
int b[1000];
int k;
int n;
void tianji2();
void tianji1()
{
     if(k==n)
     return;
    
      while(1) 
      { if(k==n)
          break;
          k++;
         
         if(a[i2]>b[j2])
          {i2++;j2++;sum+=100;continue;}     
          if(a[i2]<b[j2])
          {i1--;sum-=100;j2++;continue;}
         if(a[i2]==b[j2])
         {
           if(a[i1]==b[j1])
            {if(a[i1]!=a[i2])sum-=100;i1--;j2++;}
           else {k--;tianji2();return;}
         }
      }
}
void tianji2()
{
     if(k==n)
     return;
    
      while(1) 
      {
        if(k==n)
          break;
          k++;
         if(a[i1]>b[j1])
          {i1--;j1--;sum+=100;continue;}     
       if(a[i1]<b[j1])
         {i1--;sum-=100;j2++;continue;}
        if(a[i1]==b[j1])
         {
           if(a[i2]==b[j2])
           {if(a[i1]!=a[i2])sum-=100;i1--;j2++;}
           else {k--;tianji1();return;}
         }
     }
}

int main()
{   while(1)
    {
            cin>>n;
             if(n==0)
             break;
          
           for(int i=0;i<n;i++)
           cin>>a[i];
             for(int i=0;i<n;i++)
           cin>>b[i];
           for(int i=0;i<n;i++)
           for(int temp=a[i],j=i-1;j>=0;j--)
           {
                   
             if(temp<a[j])
             {a[j+1]=temp;break;}
             a[j+1]=a[j];a[j]=temp;   
                   }  
             for(int i=0;i<n;i++)
           for(int temp=b[i],j=i-1;j>=0;j--)
           {
             if(temp<b[j])
             {b[j+1]=temp;break;}
             b[j+1]=b[j];b[j]=temp;      
           }
          
         sum=0;
           i2=0,j2=0;
           i1=n-1;j1=n-1;
           k=0;
           
         tianji1();
         cout<<2*sum<<endl;
    }

    return 0;
    
}
