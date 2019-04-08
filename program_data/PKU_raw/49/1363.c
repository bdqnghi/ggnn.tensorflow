int hui(char s[501]){
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]!=s[strlen(s)-1-i]){
			return 0;
			break;
		}
	}
	if(i>=strlen(s)) return 1;
}
int main()
{
	int i,j,len;
	char s[501],temp[501];
	cin.getline(s,501);
	for(len=2;len<=strlen(s);len++){
		for(i=0;i+len-1<strlen(s);i++){
			for(j=0;j<len;j++){
				temp[j]=s[i+j];
				temp[len]='\0';
			}
			if(hui(temp)==1)
				cout<<temp<<endl;
		}
	}
	return 0;
}