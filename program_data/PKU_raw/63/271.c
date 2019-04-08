/*??
 1000012872*/

int main()
{
	int x1,x2,y1,y2,i1,j1,i2,j2,a[100][100],b[100][100],c[100][100]={0},i,j;//a?b????????????c??????a?b????
     cin>>x1>>y1;
for(i=0;i<x1;i++)
	for(j=0;j<y1;j++)
		cin>>a[i][j];//??a??

   cin>>x2>>y2;
for(i=0;i<x2;i++)
	for(j=0;j<y2;j++)
		cin>>b[i][j];//??b??

for(i1=0;i1<x1;i1++)
	for(j2=0;j2<y2;j2++)
	    for(j1=0,i2=0;j1<y1,i2<x2;j1++,i2++)
		    c[i1][j2]=a[i1][j1]*b[i2][j2]+c[i1][j2];//?????c????a?????b???

    cout<<c[0][0];
for(j=1;j<y2;j++)
	cout<<" "<<c[0][j];//?????

for(i=1;i<x1;i++)
{
	cout<<endl;//??
    cout<<c[i][0];
      for(j=1;j<y2;j++)
		cout<<" "<<c[i][j];
 }//?????
return 0;
}
