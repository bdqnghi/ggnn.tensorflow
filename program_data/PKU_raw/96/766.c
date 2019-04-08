char input[200];
int output[200];
int main(){
	cin >> input;
	memset(output,0,sizeof(output));
	int length  = strlen(input);
	int remainder = 0,i;
	for(i = 0;i < length;i ++){
		remainder *= 10;
		remainder += input[i] - '0';
		if(remainder < 13){
			output[i] = 0;
		}else{
			output[i] = remainder / 13;
			remainder %= 13;
		}
	}
	for(i = 0;i < length;i ++){
		if(output[i] != 0)
			break;
	}
	if(i == length)
		cout << 0;
	else
		for(;i < length;i ++)
			cout << output[i];
	cout << endl << remainder << endl;
	return 0;
}
