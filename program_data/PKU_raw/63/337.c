//????????????
//20101122 liuyi
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,x1,y1,x2,y2;
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			cin>>a[i][j];                                //???????
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
			cin>>b[i][j];                          //???????
	for(i=0;i<x1;i++)
	for(j=0;j<y2;j++)
			c[i][j]=0;                      //??c?????0
    for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)
			for(int k=0;k<x2;k++)
				c[i][j]+=a[i][k]*b[k][j];             //???????c?????
	for(i=0;i<x1;i++)
		{
		  for(j=0;j<y2;j++)
		  {
			  cout<<c[i][j];
			  if(j==y2-1)
				  continue;                          //??????
			  cout<<" ";                        //????
		  }
		  cout<<endl;
		}
return 0;
}
    
