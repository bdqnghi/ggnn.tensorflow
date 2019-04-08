int main()
{
char in[1000];
while(cin.getline(in,1000,'\n')){
	//cin.getline(in,100,'\n');
	if(in[0]=='\0')break;
	int len;
	len=strlen(in);
	int i,j,k;
	int flag[100]={0};
	for(i=0;i<=len-1;i++){
		if(in[i]=='('){
			flag[i]=2;//2=$
		}
		if(in[i]==')'){
			flag[i]=3;//3=?
		}
	}
	for(i=len-1;i>=0;i--){
		if(flag[i]==1)continue;
		if(in[i]=='('){
			for(j=i+1;j<=len-1;j++){
				if(flag[j]==1)continue;
				if(in[j]==')'){
					flag[j]=1;
					flag[i]=1;
				}
				if(in[j]==')')break;
			}
		}
	}
	cout<<in<<endl;
	int temp,t;
	int num=0;
	for(i=len-1;i>=0;i--){
		if(flag[i]==2||flag[i]==3){
			temp=i;
		}
		if(flag[i]==2||flag[i]==3)break;
	}
	for(i=0;i<=len-1;i++){
		if(flag[i]==2||flag[i]==3){
			t=i;
		}
		if(flag[i]==2||flag[i]==3)break;
	}
	for(j=0;j<=len-1;j++){
		if(flag[i]==0||flag[i]==1){
			num++;
		}
	}
	if(num<len){

		for(i=t;i<=temp;i++){
			if(flag[i]==0||flag[i]==1){
				cout<<" ";
			}
			if(flag[i]==2){
				cout<<"$";
			}
			if(flag[i]==3){
				cout<<"?";
			}
		}
	cout<<endl;
	}
}
return 0;
}