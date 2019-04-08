int main()
{
  int x1,x2,y1,y2,i,j,p,q;
  int a[100][100],b[100][100],c[100][100]={0};
  cin>>x1>>y1;
  for(i=0;i<x1;i++)
  {  for(p=0;p<y1;p++)
		 cin>>a[i][p];
  }
  cin>>x2>>y2;
  for(q=0;q<x2;q++)
  { for(j=0;j<y2;j++)
		 cin>>b[q][j];
  }
  for(i=0;i<x1;i++)
	  for(j=0;j<y2;j++)
	  {
		  for(p=0;p<y1;p++)
		     c[i][j]+=a[i][p]*b[p][j];
	  }
   for(i=0;i<x1;i++)
   {   cout<<c[i][0];
	   for(j=1;j<y2;j++)
		   cout<<" "<<c[i][j];
	   cout<<endl;
   }
  return 0;                  //?????
}
