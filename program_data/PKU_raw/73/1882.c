
int main()
{
	int a[5][5];
	int i,j,max,min,x,y,n=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
	{    max=a[i][0];y=0;

	  for(j=0;j<5;j++)
	  if(a[i][j]>max)
	  { max=a[i][j];  y=j;}
	  min=a[i][y];
	  x=i;
	  for(j=0;j<5;j++)
		  if(min>a[j][y])
		  {  x=j;min=a[j][y];}
	  if(i==x) { cout<<x+1<<' '<<y+1<<' '<<a[x][y];  break;}
	  n++;
	 if(n==5&&i!=x)  cout<<"not found";
	}
  return 0;


}
