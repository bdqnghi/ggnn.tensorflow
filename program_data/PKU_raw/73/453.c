int main()
{
	int a[5][5],i,j,h,k,q,flag=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
    for(h=0;h<5;h++)
	{  
		int da=a[h][0],	 n2=0;
	     for(k=0;k<5;k++)  
		 {if(da<a[h][k])  { n2=k; da=a[h][k];}}
            int xiao=a[0][n2],n1=0;
		  for(q=0;q<5;q++)  
		  {	if (xiao>a[q][n2] ) {n1=q; xiao=a[q][n2];}}

		  if(h-n1==0) {
			  cout<<n1+1<<" "<<n2+1<<" "<<a[n1][n2]<<endl; 
			  flag++;
		  }
 }
	if (flag==0)   cout<<"not found";
 return 0;
}