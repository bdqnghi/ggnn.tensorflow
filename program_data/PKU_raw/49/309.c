int main(){
	char a[501];
	int k;
	cin.getline(a,501);
	for(int i=1;i<=strlen(a);i++)
		for(int j=0;j<=(strlen(a)-i);j++){
			for(k=0;k<=i/2;k++){
				if(a[j+k]!=a[j+i-k])break;
			}
			if(k==(i/2+1)){
				for(int l=j;l<=j+i;l++)
					cout<<a[l];
				cout<<endl;
			}
		}
	return 0;
}
