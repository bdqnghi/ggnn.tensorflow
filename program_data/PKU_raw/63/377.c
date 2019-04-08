int main ()
{
	int a[100][100],b[100][100],c[100][100];
	int x1,x2,y1,y2,i,j,k=0;
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
				{
					c[i][j]=0;
					for(k=0;k<x2;k++)
						c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
				
     for(i=0;i<x1;i++)
	 {  	
         if(y2==1)  cout<<c[i][0]<<endl;
		 if(y2==2)   cout<<c[i][0]<<' '<<c[i][1]<<endl;

		 else if(y2>2)
		 {
			 cout<<c[i][0];
          for(j=1;j<y2-1;j++)
   
	       cout<<' '<<c[i][j];
	        cout<<' '<<c[i][y2-1]<<endl;
		 }
     }
   return 0;
}
