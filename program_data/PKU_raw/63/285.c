int main()
{
 
	int a[100][100]={0},b[100][100]={0},c[100][100]={0};//???????
	int x1,x2,y1,y2,i,j,p,q,m=0;
	cin>>x1>>y1;
	for(i=0;i<x1;i++)  //????????
		for(j=0;j<y1;j++)
			cin>>a[i][j];
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
			cin>>b[i][j];
	for(i=0;i<x1;i++)    //?????
		for(j=0;j<y2;j++)
			for(p=0;p<y1;p++)
			c[i][j]=c[i][j]+a[i][p]*b[p][j];
	if(y2>1)
	{
	for(i=0;i<x1;i++)
	{
		cout<<c[i][0];
	for(j=1;j<y2;j++)          //?????
	
		{
			cout<<" "<<c[i][j];m++;
			if(m%(y2-1)==0)
				cout<<endl;
	      }           
	}}else if(y2<=1)            //????????????????????????????
		for(i=0;i<x1;i++)
			for(j=0;j<y2;j++) 
			cout<<c[i][j]<<endl;

		
	return 0;
	
}
