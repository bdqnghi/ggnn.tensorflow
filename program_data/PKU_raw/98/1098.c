int main(){
	char words[50];
	int n,sum=0,temp=0,lens;
	cin>>n;
	while(n>0){
		cin>>words;
		lens=strlen(words);
		if(lens+sum<80){
			if(temp==0){
				cout<<words;
				sum=sum+lens;
				temp++;
			}
			else{
				cout<<" "<<words;
				sum=sum+lens+1;
				temp++;}
		}
		else {
			cout<<endl<<words<<" ";
			sum=lens+1;
			temp=0;
		}
		n--;
		memset(words,0,sizeof(words));
	}
	return 0;
}
