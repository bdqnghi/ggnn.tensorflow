char key[3][4]={"er","ly","ing"};
char name[50];
char get[3];
char get3[3];
int main(){
	int n;
	cin>>n;
	int len;
	for(int i=0;i<n;i++){
		cin>>name;
		len = strlen(name);
		for(int j=len-3;j<len;j++){
			get3[j-len+3] = name[j];
			}
		for(int j = len - 2;j<len;j++){
			get[j-len+2] = name[j];
			}
		if(strcmp(get,key[0])==0||strcmp(get,key[1])==0){
			for(int j = 0;j<len-2;j++){
				cout<<name[j];
				}
			cout<<endl;
			continue;
			}
		if(strcmp(get3,key[2])==0){
			for(int j = 0;j<len-3;j++){
				cout<<name[j];
				}
			cout<<endl;
			continue;
			}
		}
	return 0;
	}
