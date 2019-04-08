


int h[MAXN], k;

int bp(int i, int height, int sum){
	if(i == k) return sum;
	if(h[i]<=height){
		int a1 = bp(i+1, h[i], sum+1);
		int a2 = bp(i+1, height, sum);
		return (a1 > a2) ? a1 : a2;
	}
	return bp(i+1,height,sum);
}

int main(){
	
	cin>>k;
	for(int i = 0; i < k; i++) cin>>h[i];

	cout << bp(0, INF, 0) << endl;

	return 0;
}
