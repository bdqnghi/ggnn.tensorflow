
int main() {
	char str[31];
	int i,j;
	gets(str);
	for(i=0;str[i]!=0;i++){
		if(str[i]>=48&&str[i]<=57){
			for(j=i;str[j]>=48&&str[j]<=57;j++)
				cout<<str[j];
			cout<<endl;
			i=j;
		}
	}

	return 0;
}
