
int m, n, total;
void putapp(int app, int dish, int last){	//app:???? dish:???? last????????					//???????
	//cout << total << endl;
	if((dish>0 && app<last) || (dish==0 && app>0))
		return;
	if(dish==0 && app==0)
		total++;
	for(int i=last; i<=app; i++){
		putapp(app-i, dish-1, i);
	}
	if(dish == n)
		cout << total << endl;
}

int main(){
	int a;
	cin >> a;
	int i=0;
	while(i<a){
		total = 0;
		cin >> m >> n;
		putapp(m, n, 0);
		i++;
	}
	return 0;
}
