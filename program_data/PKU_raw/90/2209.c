int K=0;
void Try(int,int);
void Try(int X,int Y){
	if(X==0)
		K++;
	else if(Y==1)
		K++;
	else if(X>=Y){
		Try(X,Y-1);
		Try(X-Y,Y);
	}
	else
		Try(X,Y-1);
}
int main()
{
	int t,i,M,N;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>M>>N;
		Try(M,N);
	    cout<<K<<endl;
		K=0;
	}
    return 0;
}