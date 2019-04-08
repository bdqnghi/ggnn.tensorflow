int main(){
	char sen[100];
	cin.getline(sen,100);
	for(int i=0;i<strlen(sen);){
		if(sen[i]==' '){
			cout<<' ';
			for(int j=i+1;sen[j]==' ';){
				if(sen[j]==' '){
					j++;
					i++;
				}
			}
			i++;
		}
		else {
			cout<<sen[i];
			i++;
		}
	 }
	return 0;
}