int main(){
	int n;
	cin>>n;
	struct stu{
		int num;
		int chin;
		int math;
		int sum;
	}one[n+1];

	for(int i=1;i<=n;i++){
		cin>>one[i].num>>one[i].chin>>one[i].math;
		one[i].sum=one[i].chin+one[i].math;
	} //???????
    int t=0;
	for(int i=200;i>=0;i--)
    	for(int j=1;j<=n;j++){
    		if (one[j].sum==i) {
    			cout<<j<<" "<<one[j].sum<<endl;
    			t=t+1;
    		}
    		if (t==3) {
    			i=-1;break;
    		}
    	}//????????
    return 0;
}