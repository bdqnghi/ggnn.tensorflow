int main()
{
	int m,i,j;
	int n;
	double a[100],b[100],sum;         //????
    a[0]=1;a[1]=2;         //??
    for(i=2;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];      //???????
	}
	cin>> m;
	for(i=0;i<m;i++)
	{
		sum=0;
		cin>> n;
		for(j=0;j<n;j++) 
	   {
		sum=sum+(a[j+1]/a[j]);       //????
	   }
	   b[i]=sum;
    }
	for(i=0;i<m;i++)
	{
         printf("%.3f",b[i]);             //????????
		 cout<<endl;
	}
	return 0;	

}