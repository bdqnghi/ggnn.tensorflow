
int main(){
char ch[101];
	gets(ch);
	for (int i = 0;i<strlen(ch)-1;i++){
		if(ch[i]==' '&&ch[i+1]==' '){
			for (int j = i;j<strlen(ch);j++){
				ch[j]=ch[j+1];

			}
			i=i-1;
			}
		}
	cout<<ch<<endl;
	return 0;
}