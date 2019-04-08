
int main(){
	int n;	//??????
	cin>>n;
	int num,i,j;	//num?????i?j?????
	const int t=n;
	int jishu[t];	//????????
	for(i=1,j=0;i<=n;i++){	//????????
		cin>>num;
		if(num%2==1){
			jishu[j]=num;
			j++;
		}
	}
	for(i=j-2;i>0;i--)		//???????????
		for(int k=0;k<=i;k++){
			if(jishu[k]>jishu[k+1]){
				int temp=jishu[k+1];
				jishu[k+1]=jishu[k];
				jishu[k]=temp;
			}
		}
	for(i=0;i<j;i++){		//??
		cout<<jishu[i];
		if(!(i==j-1))
			cout<<',';
	}
	return 0;
}