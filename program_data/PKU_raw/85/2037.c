
int main()
{
	int n; 
	
	cin >> n;
	for(int i=0; i<n; i++) {
		char str[100];
		cin >> str;
		if(strlen(str) > 20) {
			cout << "no" << endl;
			continue;
		}
		int j;
		if(str[0] >= '0' && str[0] <= '9') {
			cout << "no" << endl;
			continue;
		}
		for(j=0; j<strlen(str); j++) {
			if(str[j] >= 'A' && str[j] <= 'Z' || 
				str[j] >= 'a' && str[j] <= 'z' ||
				str[j] >= '0' && str[j] <= '9' ||
				str[j] == '_' ) {
				continue;
			} else {
				cout << "no" << endl;
				break;
			}
		}
		if(j == strlen(str)) cout << "yes" << endl;
	}


	return 0;
}