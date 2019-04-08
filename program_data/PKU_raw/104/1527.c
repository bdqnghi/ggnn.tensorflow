int main()
{
 	int a[100]={0},b[100]={0},n=0,m=0,i,j,k=0;
 	cin>>a[0]>>b[0];
 	while( a[n]>=1)
 		{
	 	   a[n+1]=a[n]/2;
		//	cout<< a[n]<<n<<endl;
	 	   n++;
	 	   
  	    }
		while( b[m]>=1)
 		{
	 	   b[m+1]=b[m]/2;
			//cout<<b[m]<<m<<endl;
	 	   m++;
  	    }
   for (i=0;i<=n;i++)
   {
   	   for (j=0;j<=m;j++)
   	   {
	   	   if (a[i]==b[j])
	   	   {  cout <<a[i];k=1;
		   	  break;
  			  }
	  }
	  if (k==1)	  break;
}

}
