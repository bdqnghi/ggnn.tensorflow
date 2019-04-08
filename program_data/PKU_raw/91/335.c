int main(){
	char num[101]={0},word[101]={0};
	int sum=0;
	cin.getline(num,101);
	for(int i=0;*(num+i)!=0;i++)
		sum++;
	for(int i=0;i<sum;i++){
		if(i==sum-1)*(word+i)=*(num+i)+*num;//????????????????????
		else *(word+i)=*(num+i)+*(num+i+1);
	}
	for(int i=0;i<sum;i++)cout<<*(word+i);
	return 0;
}