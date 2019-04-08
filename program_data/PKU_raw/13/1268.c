

int main(){
	int n,on=0;
	cin>>n;
	int input_array[n],output_array[100],otn_array[n];
	memset(output_array,0,sizeof(output_array));
	for(int i=0;i<n;i++) cin>>input_array[i];
	for(int i=0;i<n;i++){
		int otn=input_array[i];
		if(!output_array[otn-1]){
			output_array[otn-1]=1;
			otn_array[on]=otn;
			on++;
		}
	}
	for(int i=0;i<on;i++){
		cout<<otn_array[i];
		if(i!=on-1) cout<<' ';
	}
	return 0;
}