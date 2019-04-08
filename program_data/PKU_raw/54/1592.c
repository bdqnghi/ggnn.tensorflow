int N,K;
void Take()
{
	int i,j,h;
	for(i=1;i<7000000;i++){
		h=i;
		for(j=0;j<N;j++){
			if(h%(N-1)==0){
				h=h*N/(N-1)+K;}
			else break;}
		if(j==N){
			cout<<h<<endl;
			break;}}
}
int main()
{
	cin>>N>>K;
	Take();
	return 0;
}