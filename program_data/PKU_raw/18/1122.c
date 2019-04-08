int main()
{
    int n=0,i=0,j=0,time=0,sum=0;
    cin>>n;
    int s=n; 
    int a[100][100],b[100],c[100];
    for(time=0;time<s;time++)                  //while??????????????? .time??????????????????+1 
    {                       
       for(i=0;i<100;i++)
       {
           b[i]=1000000;        
           c[i]=1000000;      
       }                            
       for(i=0;i<s;i++)
       {
           for(j=0;j<s;j++)
           {
               cin>>a[i][j];            
           }            
       }              
       sum=0;            //?????? ,??????? 
       while(true)
       {         
       for(i=0;i<100;i++)
       {
           b[i]=1000000;        
           c[i]=1000000;      
       }                                         
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
                if(a[i][j]<b[i])
                {
                     b[i]=a[i][j];           
                }           
           }            
       }                          //???????? 
       for(i=0;i<n;i++)
       {
            for(j=0;j<n;j++)
            {
                   a[i][j]=a[i][j]-b[i];         
            }           
       }                          //????????????  
       for(j=0;j<n;j++)
       {
            for(i=0;i<n;i++)
            {
                if(a[i][j]<c[j])
                {
                     c[j]=a[i][j];           
                }            
            }           
       }                          //???????
       for(j=0;j<n;j++)
       {
            for(i=0;i<n;i++)
            {
                   a[i][j]=a[i][j]-c[j];         
            }           
       }                          //????????
       sum=sum+a[1][1];           //?? 
       for(i=1;i<n-1;i++)
       {
           for(j=0;j<n;j++)
           {
                a[i][j]=a[i+1][j];           
           }              
       }                         //?? 
       for(j=1;j<n-1;j++)
       {
           for(i=0;i<n-1;i++)
           {
                a[i][j]=a[i][j+1];             
           }              
       }                        //?? 
       n=n-1;
       if(n==1)
       {
            n=s;   
            break;   
       }                        //???????? 
       }
       cout<<sum<<endl;          //???? 
    }   
      return 0;
} 