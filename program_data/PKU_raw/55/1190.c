

int main(){
	int i,j;
	int a,b;
	long mid=0;
	char out[100];
	cin>>a;
	
	cin.get();
	char tempC;
	int temp;
	while((tempC = cin.get()) != ' '){
		
		if(tempC>='0' && tempC<='9')
			temp = tempC-'0';
		else if(tempC>='a' && tempC<='z')
			temp = tempC-'a'+10;
		else if(tempC>='A' && tempC<='Z')
			temp = tempC-'A'+10;
		mid *= a;
		mid += temp;
	}
	
	cin>>b;
	i = 0;
	while(mid > 0){
		temp = mid%b;
		if(temp >9){
			tempC = temp-10+'A';
		}
		else{
			tempC = temp+'0';
		}
		out[i]=tempC;
		++i;
		mid /= b;
	}
	if(i==0)
		cout<<"0"<<endl;
	else{
		for(j = i-1;j>=0;--j){
			cout<<out[j];
		}
		cout<<endl;
	}
	cin>>a;
	return 0;
}
