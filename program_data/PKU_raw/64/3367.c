int main ()
{
   struct distance
   {
       int point1[3];
       int point2[3];
       double dis;
   };
  struct distance d[100],middle;
  int i,j,k,n,point[100][3];
  cin >> n;
  for (i=0;i<n;i++)
  {
      for (j=0;j<3;j++)
	  {
          cin >> point[i][j];
	  }
  }
  j=0;
  k=1;
  for (i=0;i<n*(n-1)/2;i++)
  {
      d[i].point1[0]=point[j][0];
	  d[i].point1[1]=point[j][1];
	  d[i].point1[2]=point[j][2];
	  d[i].point2[0]=point[k][0];
	  d[i].point2[1]=point[k][1];
	  d[i].point2[2]=point[k][2];
	  d[i].dis=sqrt((d[i].point2[0]-d[i].point1[0])*(d[i].point2[0]-d[i].point1[0])+
		  (d[i].point2[1]-d[i].point1[1])*(d[i].point2[1]-d[i].point1[1])
		  +(d[i].point2[2]-d[i].point1[2])*(d[i].point2[2]-d[i].point1[2]));
	  k++;
	  if (k==n)
	  {
		  j=j+1;
		  k=j+1;
	  }
  }
  for (i=0;i<n*(n-1)/2;i++)
  {
	  for (j=n*(n-1)/2-1;j>i;j--)
	  {
		  if (d[j].dis>d[j-1].dis)
		  {
			  middle=d[j];
			  d[j]=d[j-1];
			  d[j-1]=middle;
		  }
	  }
  }
  for (i=0;i<n*(n-1)/2;i++)
	  cout << fixed << setprecision(2) << "(" << d[i].point1[0] << "," << d[i].point1[1] << "," << d[i].point1[2] << ")-("
	  << d[i].point2[0] << "," << d[i].point2[1] << "," << d[i].point2[2] << ")=" << d[i].dis << endl;
  return 0;
}