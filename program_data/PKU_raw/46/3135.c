int main()
{
	int h,l,i,j,a,b,c,k=0,num[100][100];
	cin>>h>>l;
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
			cin>>num[i][j];
	for(i=0;k<h*l;i++){
		for(j=i;(j<l-i)&&(k<h*l);j++){
			cout<<num[i][j]<<endl;k++;}
		for(j=i+1;(j<h-i)&&(k<h*l);j++){
			cout<<num[j][l-1-i]<<endl;k++;}
		for(j=l-2-i;(j>=i)&&(k<h*l);j--){
			cout<<num[h-1-i][j]<<endl;k++;}
		for(j=h-2-i;(j>i)&&(k<h*l);j--){
			cout<<num[j][i]<<endl;k++;}}
	return 0;
}
