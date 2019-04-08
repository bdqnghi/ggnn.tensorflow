
void ji(int shu){
	int m;
	m=shu*3+1;
	cout<<shu<<"*3+1="<<m<<endl;
	void ou(int shu);
	if (m%2==1) ji(m);
	else ou(m);
}

void ou(int shu){
	int m;
	m=shu/2;
	cout<<shu<<"/2="<<m<<endl;
	if (m==1) cout<<"End";else
	if (m%2==1) ji(m);
	else ou(m);
}

int main(){
	int n;
	cin>>n;
        if (n==1) cout<<"End";else
	if (n%2==1) ji(n);
	else ou(n);
}