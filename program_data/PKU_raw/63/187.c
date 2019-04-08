int main()
{
int M=0;  //M,k,i?????
int k=0;   
int i=0;
int Xa=0;   //????a,b??????
int Xb=0;
int Ya=0;
int Yb=0;
int c[100][100]={0};  //??3?2????????
int a[100][100]={0};
int b[100][100]={0};
    cin>>Xa>>Ya;        //??????a,b???????
       for (i=0;i<Xa;i++)
          {for (k=0;k<Ya;k++)
             {cin>>a[i][k];}
          }
   cin>>Xb>>Yb;
       for (i=0;i<Xb;i++)
          {for (k=0;k<Yb;k++)
             {cin>>b[i][k];}
          }
      for (i=0;i<Xa;i++)    //?????????
         {  for (k=0;k<Yb;k++)
              {  for  (M=0;M<Xb;M++)
                   {c[i][k]+=a[i][M]*b[M][k];
        
                   }
               }
         }
   
      for (i=0;i<Xa;i++)   //??
            { for (k=0;k<Yb;k++)
                  { if (k!=Yb-1)
                       cout<<c[i][k]<<" ";
                    if (k==Yb-1)
                       cout<<c[i][k]<<endl;
                  }
           }
return 0;
}