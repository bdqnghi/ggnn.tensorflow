int main()
{
int m,n,i,j;
int a[11][11],b[11][11];
cin>>m>>n;
for(i=0;i<11;i++)
  for(j=0;j<11;j++){
      a[i][j] = 0;
	  b[i][j] = 0;
		  if(i==5 && j==5){
		     a[i][j] = m;
		  }
}
  

  while(n--){
   for(i=1;i<=9;i++)
    for(j=1;j<=9;j++){
		if(a[i][j] != 0){
            b[i-1][j-1] += a[i][j];	
			b[i][j-1] += a[i][j];	
			b[i+1][j-1] += a[i][j];	
			b[i-1][j] += a[i][j];	
			b[i+1][j] += a[i][j];	
			b[i-1][j+1] += a[i][j];	
			b[i][j+1] += a[i][j];
			b[i+1][j+1] += a[i][j];
			b[i][j] += a[i][j];	
		}
	}

  for(i=1;i<=9;i++)
    for(j=1;j<=9;j++){
		 a[i][j] +=b[i][j];
		 b[i][j] = 0;
		}
  }
  


for(i=1;i<=9;i++)
    for(j=1;j<=9;j++){
		if(j==9){
			cout<<" "<<a[i][j]<<endl;;
		
		}
		else if(j==1){
		    cout<<a[i][j];
		}
		else cout<<" "<<a[i][j];
	}
	
return 0;
}