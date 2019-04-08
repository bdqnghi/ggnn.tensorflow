
int maxnum(int*a,int n,int up){
	if(n==0)return 0;
	int i,max=-1,t;
	for(i=0;i<n;i++){
		t=up;
		if(a[i]<=up||up==-1)t=a[i];
		else continue;
		if(maxnum(a+i+1,n-1-i,t)>max)max=maxnum(a+i+1,n-i-1,t);
	}
	return max+1;
}

int main(){
	int i,n,a[25];
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	cout<<maxnum(a,n,-1);
}
