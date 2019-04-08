//33453453553
//      34345


char str1[1000];
char str2[1000];
int num1[1000];
int num2[1000];
int main(){
	int n;
	cin>>n;
	getchar();
	while (n--){
	cin.getline(str1,999);
	cin.getline(str2,999);
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i;
	for(i=0;i<len1;i++){
		num1[i]=str1[i]-'0';
	}
	for(i=0;i<len2;i++){
		num2[i]=str2[i]-'0';
	}
	int *p1=num1+len1-1;
	int *p2=num2+len2-1;
	for(i=0;i<len2;i++){
		*p1=*p1-*p2;
		if (*p1<0){
			*p1=*p1+10;
			*(p1-1)=*(p1-1)-1;
		}
		p1--;
		p2--;
	}

	int sum=0;
	for(i=0;i<len1;i++){
		sum=sum+num1[i];
	}
	if (sum==0){
		cout<<"0"<<endl;
		return 0;
	}
	int state=0;
	for(i=0;i<len1;i++){
		if ((state==0)&&(num1[i]!=0)){
				state++;
				cout<<num1[i];
				continue;
			}
		if (state==0){
			if (num1[i]==0) continue;
		}
		if (state==1){
			cout<<num1[i];
		}
	}
    cout<<endl;
	getchar();
	}
	return 0;
}


