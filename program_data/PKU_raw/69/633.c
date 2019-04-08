char input1[260],input2[260];
int int1[260],int2[260],len1,len2;
void sum(int index, int carry){
	if(carry == 0 && index >= len1 && index >= len2)
		return ;
	int1[index] += int2[index] + carry;
	carry = int1[index] / 10;
	int1[index] %= 10;
	sum(index + 1, carry);
	return ;
}
int main(){
	cin >> input1 >> input2;
	memset(int1,0,sizeof(int1));
	memset(int2,0,sizeof(int2));
	int i,j;
	len1 = strlen(input1);
	for(i=len1-1,j=0;i>=0;i--,j++)
		int1[j] = input1[i]-'0';
	len2 = strlen(input2);
	for(i=len2-1,j=0;i>=0;i--,j++)
		int2[j] = input2[i]-'0';
	sum(0, 0);
	for(i = len1>len2?len1:len2;i >= 0;i --)
		if(int1[i] != 0)
			break;
	if(i < 0)
		cout << 0;
	else{
		for(;i >= 0;i--)
			cout << int1[i];
	}
	return 0;
}
