int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char integer1[101],integer2[101],answer[101];
		cin>>integer1>>integer2;
		memset(answer,'\0',sizeof(answer));
		int len1=strlen(integer1),len2=strlen(integer2);
		for(int j=len1-1,k=len2-1,count=99;j>=0;j--,k--,count--){
			if(k<0)answer[count]=integer1[j];
			else{
			if(integer1[j]-'0'>=integer2[k]-'0')answer[count]=(integer1[j]-'0'-(integer2[k]-'0'))+'0';
			else{
				integer1[j-1]=integer1[j-1]-1;
				answer[count]=integer1[j]-'0'+10-(integer2[k]-'0')+'0';
			}
		}
		}
		for(int j=0;j<100;j++){
			if(answer[j]!='\0')cout<<answer[j];
		}
		cout<<endl;
	}
	return 0;
}
