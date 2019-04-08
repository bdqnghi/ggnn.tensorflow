int main(){
 	int n,a,b,aa,bb;
 	cin>>n;
	aa=0;
	bb=0;
	for (int i=0;i<n;i++) {
		cin>>a>>b;
		if (a-b==-1||a-b==2) aa++;
		if (a-b==1||a-b==-2) bb++;
		if (a==b) {a+=0;b+=0;}
		}
 	if (aa>bb) cout<<"A";
 	if (aa<bb) cout<<"B";
 	if (aa==bb) cout<<"Tie";
	return 0;
}

