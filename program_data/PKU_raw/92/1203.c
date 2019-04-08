

int tianji[1000];
int qiwang[1000];

int main(){
	int n;
	while(cin>>n && n != 0){
		int i,j;
		for(i = 0;i < n;i++)

			cin>>tianji[i];
		for(i = 0;i < n;i++)
			cin>>qiwang[i];
		sort(tianji,tianji + n);
		sort(qiwang,qiwang + n);
		int money = 0;
		i = 0,j = n - 1;
		int k = i,l = j;
		while(true){
			while(tianji[i] > qiwang[k] && i <= j){
				money += 200;
				i++;
				k++;
			}
			while(tianji[j] > qiwang[l] && j >= i){
				money += 200;
				j--;
				l--;
			}
			if(i > j)
				break;
			else{
				if(tianji[i] != qiwang[l])
					money -= 200;
				i++;
				l--;
			}
		}
		cout<<money<<endl;
	}
	return 0;
}