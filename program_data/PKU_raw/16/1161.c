


int  main(){
	char num[100];
	int k=-1;
	cin >> num[0];
	for (int i = 1; num[i - 1] != '\n';i++, k++){
		cin.get(num[i]);
	}
	for (; k >= 0; k--){
		cout << num[k];
	}
	cout << endl;
	//while (1);return 0;

}