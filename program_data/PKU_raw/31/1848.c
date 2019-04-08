char info[1000][1000];
int main() {
	int k=0;
	while(1) {
		cin.getline(info[k],999);
		if (info[k++][0]=='e') break;
	}
	k-=2;
	for (;k>=0;k--) {
		cout<<info[k]<<endl;
	}
	return 0;
}