
int main(){
	const int l = 200;
	int n1[l + 10], n2[l +10];
	char n10[l + 10], n20[l + 10];
	int i, j;
	for(i = 0; i < l + 10; i++)
		n1[i] = n2[i] = n10[i] = n20[i] = 0;
	cin >> n10 >> n20;
	int l1 = strlen(n10);
	int l2 = strlen(n20);
	i = l1 + 1, j = 0;
	while(--i){
		n1[j] = n10[i - 1] - '0';
		j++;
	}
	i = l2 + 1; j = 0;
	while(--i){
		n2[j] = n20[i - 1] - '0';
		j++;
	}
	int lm = l1 > l2 ? l1 : l2;
	for(i = 0; i < lm; i++){
		n1[i] += n2[i];
		if(n1[i] > 9){
			n1[i + 1] += n1[i] / 10;
			n1[i] = n1[i] % 10;
		}
	}
	i = l + 1;
	while(n1[i] == 0) i--;
	if(i < 0) cout << '0';
	else{
		i++;
		while(i--)
			cout << n1[i ];
	}
	return 0;
}