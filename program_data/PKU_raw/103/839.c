/*1200012866 ???*/
int main(){
	char a[1010];
	cin>>a;
	for(int i=0;i<strlen(a);i++)//???????
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]+'A'-'a';
	int len=0;
	char before='\0';
	for(int i=0;i<strlen(a);i++){
		if(a[i]==before)//?????
			len++;
		else{//?????????
			if(before!='\0')
				cout<<'('<<before<<','<<len<<')';
			before=a[i];
			len=1;
		}
	}
	cout<<'('<<before<<','<<len<<')'<<endl;

	return 0;
}