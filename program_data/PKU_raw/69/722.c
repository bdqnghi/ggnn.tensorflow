int a[300],aw;
int b[300],bw;
int c[300],cw;
int main(){
	char tp[300];
	cin>>tp;
	for(int i=1;i<=strlen(tp);i++){
		a[i]=tp[strlen(tp)-i]-48;
		
	}
	aw=strlen(tp);
	cin>>tp;
	for(int i=1;i<=strlen(tp);i++){
		b[i]=tp[strlen(tp)-i]-48;
	}
	bw=strlen(tp);
	
	int max=aw>bw?aw:bw;
	c[1]=0;
	for(int i=1;i<=max;i++){
		c[i+1]=0;
		c[i]=c[i]+a[i]+b[i];
		c[i+1]=c[i]/10;
		c[i]=c[i]%10;
	}
	cw=1;
	for(int i=max+5;i>=1;i--){
		if(c[i]!=0){
			cw=i;
			break;
		}
	}
	for(int i=0;i<cw;i++){
		cout<<c[cw-i];
	}
}