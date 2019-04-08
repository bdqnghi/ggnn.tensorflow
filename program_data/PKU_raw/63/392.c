int main()                                                                //?????
{
	int a[100][100]={0},b[100][100]={0},c[100][100]={0},i,j,k,x1,x2,y1,y2; //????
	cin>>x1>>y1;                                                          //??a?????
	for(i=0;i<x1;i++){
		for(j=0;j<y1;j++){
			cin>>a[i][j];                                                 //??a?????
		}}
	cin>>x2>>y2;                                                          //????B???
	for(i=0;i<x2;i++){
		for(j=0;j<y2;j++){
			cin>>b[i][j];                                                //????b?????
		}}
	for(i=0;i<x1;i++){
		for(j=0;j<y2;j++){
			for(k=0;k<y1;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];                        //???????????
			}}}
	for(i=0;i<x1;i++){
		for(j=0;j<y2-1;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<c[i][y2-1]<<endl;                                         //???????c
	}
	return 0;
}



