void strf(char *str){
	for(int i = 0;i < (int)(strlen(str)/2);i ++){
		char temp = str[i];
		str[i] = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = temp;
	}
}
int main(){
	char an1[201],an2[201];
	cin >> an1 >> an2;
	strf(an1);strf(an2);
	int anum1[201],anum2[201];
	int ar[202];
	memset(anum1,0,sizeof(anum1));
	memset(anum2,0,sizeof(anum2));
	memset(ar,0,sizeof(ar));
	int l1 = strlen(an1),l2 = strlen(an2),i;
	int length = l1 > l2 ? l1: l2;
	if(length == l1){
		for(i = l2;i < length;i ++){
			an2[i] = '0';
		}
		an2[i] = 0;
	}
	else {
		for(i = l1;i < length;i ++){
		an1[i] = '0';
	}
		an1[i] = 0;
	}
	for(i = 0;i < length;i ++)
	{
		anum1[i] = an1[i] - '0';
		anum2[i] = an2[i] - '0';
		ar[i] += anum1[i] + anum2[i];
	}
	for(i = 0;i < length + 1;i ++){
		if(ar[i] >= 10){
			ar[i] -= 10;
			ar[i + 1] ++;
		}
	}
	for(i = length + 2;ar[i] == 0;i --);
	if(i < 0) cout << '0' << endl;
	else{
		for(;i >= 0;i --){
			cout << ar[i] ;
		}
		cout << endl;
	}

}
