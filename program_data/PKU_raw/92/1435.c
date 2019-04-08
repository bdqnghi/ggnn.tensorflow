
const int MAX = 1005;
int tian[MAX],qi[MAX];
int n;

int func(int t0,int q0,int t1,int q1){
	if(t0>t1 || q0>q1) return 0;

	while(tian[t1]>qi[q1]){
		t1--;q1--;
		return 1+func(t0,q0,t1,q1);
	}
	while(tian[t0]>qi[q0]){
		t0++;q0++;
		return 1+func(t0,q0,t1,q1);
	}

	if(tian[t0]<qi[q1])
		return func(t0+1,q0,t1,q1-1)-1;
	else if(tian[t0] == qi[q1])
		return func(t0+1,q0,t1,q1-1);
}

int main(){
	while(cin>>n){
		if(n==0) break;
		for(int i=0;i<n;i++)
			cin>>tian[i];
		for(int i=0;i<n;i++)
			cin>>qi[i];
		
		sort(tian,tian + n);
		sort(qi,qi+n);

		cout<<200*func(0,0,n-1,n-1)<<endl;
	}

	return 0;
}