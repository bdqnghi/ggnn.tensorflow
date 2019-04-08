int main()
{
	int n,a[10][3],i,j,k;
	double b[10][10];
	cin>>n;
	for(i=0;i<=n-1;i++)
	 for(j=0;j<=2;j++)
      cin>>a[i][j];
    for(i=0;i<=n-1;i++)
	 for(j=i+1;j<=n-1;j++)
	  b[i][j]=sqrt(pow((double)(a[i][0]-a[j][0]),2)+pow((double)(a[i][1]-a[j][1]),2)+pow((double)(a[i][2]-a[j][2]),2));
	
	 for(k=1;k<=n*(n-1)/2;k++)
	   {
			double r=-1;
			int first,next;
			for(i=0;i<=n-1;i++)
	 			for(j=i+1;j<=n-1;j++){		
				 if(b[i][j]>r){
				  r=b[i][j];
				  first = i;
				  next = j;
				}
			}
		 cout<<"("<<a[first][0]<<","<<a[first][1]<<","<<a[first][2]<<")-("
		<<a[next][0]<<","<<a[next][1]<<","<<a[next][2]<<")="
		<<fixed<<setprecision(2)<<r<<endl;	
		b[first][next] = -9999999;
			}
	 cin>>n;
	 return 0;
	 
      
	}
 
