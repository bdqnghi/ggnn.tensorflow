int main()
{
    int a[101][101],b[101][101],c[101][101],i,j,k,x1,x2,y1,y2;
    cin>>x1>>y1;
    for(i=0;i<x1;i++)
       for(j=0;j<y1;j++)
          cin>>a[i][j];
    cin>>x2>>y2;
    for(i=0;i<x2;i++)
       for(j=0;j<y2;j++)
          cin>>b[i][j];
    for(i=0;i<x1;i++)
       for(j=0;j<y2;j++)       
          for(k=0;k<y1;k++)
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
    for(i=0;i<x1;i++)
	 {
	 for(j=0;j<y2-1;j++) 
	   cout<<c[i][j]<<" ";
	   cout<<c[i][y2-1];
	   cout<<endl;
	   }
	   cin.get();cin.get();cin.get();
	return 0;
}