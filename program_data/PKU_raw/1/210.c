int f(int x,int y);// ??????x????????y????????????????? 
int main()
{
    int n,i,j,a,sum;
    cin>>n;
    for(i=1;i<=n;i++)//?? 
   {
      cin>>a;
      sum=0;     //??? 
    for(j=1;j<=a;j++)
     sum+=f(a,j);   //?? 
    
    cout<<sum<<endl;  //?? 
    
   }
    return 0;
    }
  int f(int x,int y)//??? 
  {
     int i,num=0;
     if(y==1)
       return 0;
    else
    {   
     if(x%y!=0) 
      return 0;
     else if(x==y)
      return 1;  
     else
    {
       for(i=y;i>=1;i--)      
         num+=f(x/y,i); //?? 
         
       return num;     
                 }
       
      }
      }  
    /* 
      ???????????? 
      ?100?? 
      sum=???? 
      f(100,100)=1   ??100=100 
      f(100,99) =0
      f(100,98)=0
      ....
      ....
      f(100,50)=f(2,50)+f(2,49)+........+f(2,2)+f(2,1) =1   ?????50????f(2,2)?1,?????? 
      ....
      ....
     f(100,2) =  f(50,2)+f(50,1)=f(25,2)+0=0
     f(100,1) =0
     ????? ?????????????? 
  */  