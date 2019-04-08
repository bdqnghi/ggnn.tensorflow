int main() 
 {
 	int i,j,n,k,x,y;
 	int a[50001];
	cin>>n;
 	for(i=1;i<=n;i=i+2) 
 	{
	 	a[i]=1;
	 }
	 for(i=9;i<=n;i=i+2)
 	 {
 	 	for(j=3;j<=sqrt(i);j=j+2)
 	 	{
	 	 	if (i%j==0) 
			  {
  				 a[i]=0;break;
  			  } 
	 	 }
 	 }
 	for(j=6;j<=n;j=j+2)
 	{
	 	
	 for(i=3;i<=(j/2);i=i+2)
 	{
	 	if ((a[i]==1)&&(a[j-i]==1))
	 	{cout<<j<<"="<<i<<"+"<<(j-i)<<endl;break;}
	 }
 	}
 
return 0;
}