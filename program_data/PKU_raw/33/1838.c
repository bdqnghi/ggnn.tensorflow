int main() {
    int i,n;
    char a[260];
	cin >> n;
	while(n > 0){
		scanf("%s",a);
		for(i=0;a[i]!=0;i++){
			switch(a[i]){
			case 'A': a[i] = 'T'; break;
			case 'T': a[i] = 'A'; break;
			case 'C': a[i] = 'G'; break;
			case 'G': a[i] = 'C'; break;
			}
		}
		cout << a <<endl;
		n--;
	}
	return 0;
}

