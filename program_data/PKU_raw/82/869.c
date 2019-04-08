int main(){
	int n;
	cin>>n;
	int count,max=0,i=0;
	while(i<n){
		count=0;
		int h,l;
		for(int j=i;j<n;j++){
			cin>>h>>l;
			if((h>140||h<90)||(l>90||l<60)){
				i++;
				break;
			}
			else{
				count++;
				if(count>max) max=count;
				i++;
			}
		}
	}
	cout<<max;
	return 0;
}