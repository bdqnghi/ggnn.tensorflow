int main()
{
   int a[100][100],b[100][100],c[100][100], sum=0, k;
   int x1, y1, x2, y2, i, j;
   cin >> x1 >>y1;
   for(i=0;i<x1;i++)
	   for(j=0;j<y1;j++)
	   { cin >> a[i][j];}

   cin >> x2 >>y2;
      for(i=0;i<x2;i++)
	      for(j=0;j<y2;j++)
		    cin >> b[i][j];

	for(i=0;i<x1;i++)
	      for(j=0;j<y2;j++)
		  {
			  for(k=0;k<x2;k++)
				  sum=sum+a[i][k]*b[k][j];
			  c[i][j]=sum;
              sum=0;
		  }
  	for(i=0;i<x1;i++)
	      for(j=0;j<y2;j++)
		  {

			  if(j==0) 
			  {
				  if(y2==1) cout << c[i][j] <<endl;
					else  cout << c[i][j];
			  }
			  else if(j==y2-1)  cout << ' ' << c[i][j] << endl;
			  else  cout << ' '<< c[i][j];		  
		  }


	return 0;
}
