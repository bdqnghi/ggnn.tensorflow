
int a[10000];
int b[10000];
int n,m;
void du()
{
cin>>n>>m;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<m;i++)
cin>>b[i];
}
void ran()
{
 for(int i=0;i<n;i++)    
  { int temp=a[i];
           for(int j=i-1;j>=0;j--)
     {
         if(a[j]<=temp)    
          {  a[j+1]=temp;break;} 
         else   {a[j+1]=a[j];a[j]=temp;}
           
          
   
   }  
}
  
 for(int i=0;i<m;i++)    
  { int temp=b[i];
           for(int j=i-1;j>=0;j--)
     {
         if(b[j]<=temp)    
          {  b[j+1]=temp;break;} 
         else   {b[j+1]=b[j];b[j]=temp;}
           
          
  }
   } 
 }
void he()
{
for(int i=n;i<n+m;i++)     
    a[i]=b[i-n]; 
     
     }
void shu()
{
for(int i=0;i<n+m-1;i++)     
    cout<<a[i]<<' ';
  cout<<a[n+m-1];   
     }
int main()
{ 
du();
ran();
he();
shu();

   return 0;
    
}
