int main()
{
    int x1,x2,y1,y2,d=0;
	int i,j,k;
	1 <= x1,x2,y1,y2 <=100;
	cin >> x1 >> y1;
	int a[x1][y1];
	for(i=0;i<=x1-1;i++)
	{
	   for(k=0;k<=y1-1;k++)
	   {
	     cin >> a[i][k];
	   }
	 }
	cin >> x2 >> y2;
	int b[x2][y2],c[x1][y2];
	 for(k=0;k<=x2-1;k++)
	 {
	    for(j=0;j<=y2-1;j++)
		{
		  cin >> b[k][j];
		  }
	 }
	for(i=0;i<=x1-1;i++)
	{
	  for(j=0;j<=y2-2;j++)
	  {
	    for(k=0;k<=y1-1;k++)
		{
		  d = d + a[i][k] * b[k][j];
		  }
		c[i][j] = d;
		d = 0;
	    cout << c[i][j] << " ";
		}
		 for(j=y2-1;j<=y2-1;j++)
		 { 
			 for(k=0;k<=y1-1;k++)
		 {
		    d = d + a[i][k] * b[k][j];
			}
		  c[i][j] = d;
		  d = 0;
		cout << c[i][j] <<endl;
		}
	}
}