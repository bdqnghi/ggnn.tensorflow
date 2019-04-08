int main(){
	int i,number=0;
	char string[31];
	cin.getline(string,50);
	for(i=0;string[i]!=0;i++){
		if(string[i]>='0'&&string[i]<='9')cout<<string[i];
		else if(i!=0)
			if(string[i-1]>='0'&&string[i-1]<='9'){
				cout<<endl;
				number++;
			}
	}
	number++;
	cout<<endl;
	return 0;
}
