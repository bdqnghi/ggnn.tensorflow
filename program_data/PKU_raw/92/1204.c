

int n;
int qiwang[1000];
int qiwangs,qiwange;
int tianji[1000];
int tianjis,tianjie;

int main(){
	int i;
	while(cin>>n && n != 0){
		for(i = 0;i < n;i++)
			cin>>tianji[i];
		for(i = 0;i < n;i++)
			cin>>qiwang[i];
		sort(tianji,tianji + n);
		sort(qiwang,qiwang + n);
		qiwangs = 0;
		qiwange = n - 1;
		tianjis = 0;
		tianjie = n - 1;
		int yinzi = 0;
		while(qiwangs <= qiwange){
			while(tianji[tianjis] > qiwang[qiwangs] && qiwangs <= qiwange){
				yinzi += 200;
				tianjis++;
				qiwangs++;
			}
			while(tianji[tianjie] > qiwang[qiwange] && qiwangs <= qiwange){
				yinzi += 200;
				tianjie--;
				qiwange--;
			}
			if(tianji[tianjis] < qiwang[qiwange] && qiwangs <= qiwange)
				yinzi -= 200;
			qiwange--;
			tianjis++;
		}
		cout<<yinzi<<endl;
	}
	return 0;
}