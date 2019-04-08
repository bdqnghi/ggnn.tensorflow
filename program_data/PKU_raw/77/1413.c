
int main(){
	char x[110], a, b;
	int i, j;
	cin.getline(x, 110, '\n');
	a = x[0];
	for(i = 1;;i++){
		if(x[i] != a){
			b = x[i];
			break;
		}
	}
	for(i = 0;i < strlen(x);i++){
		if(x[i] == b)
		{
			for(j = i - 1;;j--)
				if(x[j] == a)
					break;
			cout << j << " " << i << endl;
			x[j] = x[i] = ' ';
		}
	}
	return 0;
}