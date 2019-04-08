

int main(){
	char a[31],*p;
	cin.getline(a,31);
	p=a;
	int flag=0,sum=0;
	for(int i=0;p[i]!='\0';i++){
		if(p[i]>='0'&&p[i]<='9'){
			flag=0;
			cout<<p[i];
			sum++;
		}
		else{
			flag++;
			if(sum!=0&&flag==1){
				cout<<endl;
				sum=0;
			}
		}
	}
	return 0;
} 