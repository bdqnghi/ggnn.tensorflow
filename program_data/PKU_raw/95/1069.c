int main(){
	char a[80],b[80];//???????
	cin.getline(a,80);
	cin.getline(b,80);//????
	int n,m;//????
	n=strlen(a);
	m=strlen(b);
	int i;//????
	for(i=0;(i<m)||(i<n);i++){
		if (a[i]>90) a[i]=a[i]-32;
		if(b[i]>90) b[i]=b[i]-32;
	}

		if(strcmp(a,b)==0) cout<<"=";
		if(strcmp(a,b)<0) cout<<"<";

		if(strcmp(a,b)>0) cout<<">";



		return 0;
}
