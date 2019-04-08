int main()
{ 
 
  int k=0;   //??3????k,i,W
  int i=0; 
  int W=0;
  int Xa=0;  //????2?????????
  int Xb=0;
  int Ya=0;
  int Yb=0;
  int a[100][100]={0};   //??3???
  int b[100][100]={0};
  int c[100][100]={0};
     cin>>Xa>>Ya;            
         for(i=0;i<Xa;i++)  //??a?????
              {  for (k=0;k<Ya;k++)
                  {cin>>a[i][k];
                  }
              }
     cin>>Xb>>Yb;
         for (i=0;i<Xb;i++)
              {  for (k=0;k<Yb;k++)
                 {cin>>b[i][k];
                 }
              }
     for (i=0;i<Xa;i++)    //??c?????
          { for (k=0;k<Yb;k++)
              {  for (W=0;W<Xb;W++)
                   {c[i][k]=c[i][k]+a[i][W]*b[W][k];}
              }
          }
       for (i=0;i<Xa;i++)      //??c??
          {for (k=0;k<Yb;k++)
             {  
                if (k==Yb-1)      
                  {cout<<c[i][k]<<endl;}
                else 
                  {cout<<c[i][k]<<" ";}
             }
          }
       
return 0;
}
