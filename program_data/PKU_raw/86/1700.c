//************************************
//*  ?? ?:5-11.cpp                *
//*  ?   ?:???                  *
//*  ????:2013.10.31             *
//*  ????:?????             *
//************************************
int main()
{
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++)
  {
   int w;       
   cin>>m;
   if(m==0)
     cout<<"60"<<endl;
   else
   {  
   int p[m];
   for(int j=0;j<m;j++)
   {
    cin>>p[j];
   }
    for(int k=m-1;k>=0;k--)
    {
     if(p[k]+k*3<=60)
     {
      w=k;break;
     }
    }
     if((p[w]+3*(w+1))>=60)
     cout<<p[w]<<endl;
     else
     cout<<60-3*(w+1)<<endl;
   }
   }
   
   return 0;
}    
                          
          
          
