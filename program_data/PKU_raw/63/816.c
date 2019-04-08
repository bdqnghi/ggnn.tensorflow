int main()
{
   int a[100][100],b[100][100],c[100][100];
   int x1,y1,x2,y2,i,j,k,s;
   for(i=0;i<100;i++)
   {
                    for(j=0;j<100;j++)
                    {
                                     c[i][j]=0;
                    }
                   
   }
   cin>>x1>>y1; 
   for(i=0;i<x1;i++)
   {
                    for(j=0;j<y1;j++)
                    {
                                     cin>>a[i][j];
                    }
                    
   }
   cin>>x2>>y2; 
   for(i=0;i<x2;i++)
   {
                    for(j=0;j<y2;j++)
                    {
                                     cin>>b[i][j];
                    }
                    
   }
   for(i=0;i<x1;i++)
   {
                    for(j=0;j<y2;j++)
                    {s=0;
                                     while(s<x2)
                                    { c[i][j]=c[i][j]+a[i][s]*b[s][j];
                                     s++;}
                    }
   }
   for(i=0;i<x1;i++)
   {
                    for(j=0;j<y2-1;j++)
                    {
                                     cout<<c[i][j]<<" ";
                    }
                    cout<<c[i][y2-1]<<endl;
   }
   cin>>k;
   return 0;
}