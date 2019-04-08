char s[110];
void operate(){
	int pre = strlen(s);
	int len = pre;
	for(int i=len-1;i>=0;i--){
		//??????????? 
		if(s[i]==' '){
			for(int j=i+1;j<pre;j++){
				cout<<s[j];
				}
			cout<<" ";
			pre = i;
			}
		}
	for(int j=0;j<pre;j++){
		cout<<s[j];
		}
	return;
	}
int main(){
	cin.getline(s,110);
	operate();
	return 0;
	}
