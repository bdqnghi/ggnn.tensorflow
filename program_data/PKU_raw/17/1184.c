
char x[1010] = "", tar[1010] = "";
int len = 0, ctr;

void F(int s){
	int i;
	for(i = s + 1;i < len;i++){
		if(x[i] == '(' && tar[i] == '$' && ctr)
			F(i);
		if(x[i] == ')' && tar[i] == '?'){
			tar[s] = tar[i] = ' ';
			ctr--;
			return;
		}
	}
	return;
}

int main(){
	int i;
	while(cin >> x){
		ctr = 0;
        cout << x << endl;
		len = strlen(x);
		for(i = 0;i < len;i++){
			if(x[i] == '(')
				tar[i] = '$';
			else if(x[i] == ')'){
				tar[i] = '?';
				ctr++;
			}
			else
				tar[i] = ' ';
		}
		tar[len] = '\0';
		for(i = 0;i < len - 1;i++){
			if(x[i] == '(' && tar[i] == '$' && ctr)
				F(i);
		}
		cout << tar << endl;
	}
	return 0;
}


