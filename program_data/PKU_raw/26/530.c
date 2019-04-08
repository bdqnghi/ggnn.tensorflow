int main(){
	int i;
	char c[101] = { 0 };
	cin.getline(c, 101, '\n');
	for (i = 0; i < strlen(c); i++) {
		if(c[i]!=' ') cout<<c[i];
		else{
		while (c[i]==' ') i++;
		cout<<" "<<c[i];
		}
	}return 0;
}
