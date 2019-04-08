
int main() {
	char a[1000], b[1000];
	int c[130] = { 0 },t=0;
	cin >> a >> b;
	if (strlen(a) != strlen(b))//?????
		cout << "NO";
	else {//?????
		for (int i = 0; i < strlen(a); i++) {//????????
			c[b[i]]--;
			c[a[i]]++;
		}
        for (int i=0;i<130;i++){
        	if (c[i]!=0){
        		t=1;
        	   cout<<"NO";
        	   break;
        	}
        }
        if (t==0)
        	cout<<"YES";
	}

	return 0;
}