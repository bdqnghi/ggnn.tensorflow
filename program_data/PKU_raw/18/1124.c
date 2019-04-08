int main()
{
	int n ,a[100][100] , min ,sum=0 , t=0 , c=0;
	cin >>n;
	for (int i=0;i < n;i++)//??n???
	{
	   for (int j=0;j < n;j++)//??n*n??
	   {
	      for (int k=0;k < n;k++)
		  cin >>a[j][k];
		  cout <<endl;
	   }
	   for (int l=0;l < n-1;l++)//???????n-1???
	   {
	      for (int j=0;j < n-l;j++)
		  {
		     t=0;
		     for (int q=0;q < n-l;q++)
		       if (a[j][q]==0) t=t+1;//????0????????0
			  if (t > 0) continue;
			  else 
			  {
			  min = a[j][0];
			  for (int y=1;y < n-l;y++)//?????????
			    if (min > a[j][y]) min = a[j][y];
			  for (int r=0;r < n-l;r++)
			     a[j][r]=a[j][r]-min;//???0
			  }
		  }
		   for (int k=0;k < n-l;k++)
		  {
		     c=0;
		     for (int p=0;p < n-l;p++)
		       if (a[p][k]==0) c=c+1;
		     if (c > 0) continue;
		       else 
			  {
			  min = a[0][k];
			  for (int y=1;y < n-l;y++)
			    if (min > a[y][k]) min = a[y][k];
			  for (int r=0;r < n-l;r++)
			     a[r][k]=a[r][k]-min;
			  }
		  }
		   sum=sum+a[1][1];//?sum????
		   a[0][0]=a[0][0];//????????????
		   for (int e=1;e < n-l;e++)
		       a[0][e] = a[0][e+1];
		   for (int g=1;g < n-l;g++)
		       a[g][0]=a[g+1][0];
		   for (int f=1;f < n-l;f++)
		   {
		      for (int s=1;s < n-l;s++)
		       a[f][s]=a[f+1][s+1];
		   }
	   }
	   cout <<sum<<endl;
	   sum=0;
	}
	return 0;
}

