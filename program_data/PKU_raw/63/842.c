int main()
{
  int i,j,x,x1,y1,x2,y2,r,k=0,p=0,a[100][100],b[100][100],c[100][100];
  cin>>x1>>y1;
  for (i=0;i<=x1-1;i++)
  {
	  for (j=0;j<=y1-1;j++)
      cin>>a[i][j];
  }
  /*
  for (i=0;i<=x1-1;i++)
  {
	  for(j=0;j<=y1-1;j++)
	  	cout<<a[i][j]<<" ";
	  cout<<endl;
  }
  */
  cin>>x2>>y2;
  for (i=0;i<=x2-1;i++)
  {
	  for(j=0;j<=y2-1;j++)
	  {cin>>x;
	  b[i][j]=x;}
  }
  /*
  for (i=0;i<=x2-1;i++)
  {
	  for(j=0;j<=y2-1;j++)
	  	cout<<b[i][j]<<" ";
	  cout<<endl;
  }
  */
  for (i=0;i<=x1-1;i++)
  {
	  	for(j=0;j<=y2-1;j++){
			k=0;
			for (r=0;r<=y1-1;r++){
	 	 		k=k+a[i][r]*b[r][j];
			}
	 	 	c[i][j]=k;
		}
	 
  }
  /*
  for (i=0;i<=x1-1;i++)
  {
	  for(j=0;j<=y2-1;j++)
	  	cout<<c[i][j]<<" ";
	  cout<<endl;
  }
  */
  for(i=0;i<=x1-1;i++)
  {
	  for(j=0;j<=y2-2;j++){
			cout<<c[i][j]<<" ";	
		}
		cout<<c[i][j]<<endl;
	  /*{if (p==0) {cout<<c[i][j];
		  p=1;}
	  else cout<<" "<<c[i][j];}
	  */
	  

  }
  cin>>i;
 return 0;
}