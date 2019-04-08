
//********************
int a[101][101]={0};
int b[101][101]={0};
int c[101][101]={0};
int x1=0,x2=0,y1=0,y2=0,i=0,j=0,sum=0;
//********************

int main()
{
    cin>>x1>>y1;
   for(i=0;i<x1;i++)
    {
       for(j=0;j<y1;j++)
         {
            cin>>a[i][j]; 
                
         }
             
    }
    

    cin>>x2>>y2;
    for(int n1=0;n1<x2;n1++)
    {
       for(int n=0;n<y2;n++)
         {
            cin>>b[n1][n]; 
                
         }
             
    }
    

    for(int m1=0;m1<x1;m1++)
    {
       for(int m2=0;m2<y2;m2++)
         {
            for(int m=0;m<=y1;m++)
            {
                    c[m1][m2]=c[m1][m2]+a[m1][m]*b[m][m2];
            }
            
                            
         }
             
    }
    i=0;
    j=0;
 for(i=0;i<x1;i++)
 {
                  cout<<c[i][0];
                  for(j=1;j<y2;j++)
                  {
                    cout<<" "<<c[i][j];
                  }
                  cout<<endl;
 }
 return 0;
    
        
    
}
