int a[10000], b[10000], c[20000],n ,m;
void input(){
	cin >> n >> m;
	for(int i = 0; i < n; i ++)
		cin >> a[i];
	for(int j = 0; j < m; j ++)
		cin >> b[j];
}
void sort(){
	int temp;
	for(int i = 0; i < n-1; i ++)
		for(int j = 0; j < n-1-i; j ++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	for(int i = 0; i < m-1; i ++)
			for(int j = 0; j < m-1-i; j ++){
				if(b[j] > b[j+1]){
					temp = b[j];
					b[j] = b[j+1];
					b[j+1] = temp;
				}
			}
}
void combine(){
	for(int i = 0; i < n; i ++)
		c[i] = a[i];
	for(int j = n; j < n+m; j ++)
		c[j] = b[j - n];
}
void out(){
	cout << c[0] ;
	for(int i = 1; i <n+m; i ++)
		cout << " "<<c[i];
}
int main() {
	input();
	sort();
	combine();
	out();
	return 0;
}