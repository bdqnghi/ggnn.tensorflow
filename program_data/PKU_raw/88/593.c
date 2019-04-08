int main(){
	char a[60];
	char *p=a;
	cin.getline(p,59);
	int i=0,len=strlen(p);
	do{
		if(p[i]=='-') do{
			i++;
		}while(p[i]<48||p[i]>57);
		if(p[i]>=48&&p[i]<=57){
			do{
				cout <<p[i];
				i++;
			}while(p[i]>=48&&p[i]<=57);
			cout << endl;
		}else i++;
	}while(i<len);
	return 0;
}