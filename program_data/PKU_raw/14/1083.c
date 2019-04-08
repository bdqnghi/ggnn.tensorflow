int main(){
	struct student{
		int stuno;
		int score1;
		int score2;
		int score0;
	};
	int n,i,j,temp;
	cin>>n;
	struct student num[n];
	for(i=0;i<n;i++){
		cin>>num[i].stuno;
		cin>>num[i].score1;
		cin>>num[i].score2;
		num[i].score0=num[i].score1+num[i].score2;
	}
	for(i=0;i<3;i++)
		for(j=i+1;j<n;j++)
			if(num[i].score0<num[j].score0){
				temp=num[i].score0;
				num[i].score0=num[j].score0;
				num[j].score0=temp;
				temp=num[i].stuno;
				num[i].stuno=num[j].stuno;
				num[j].stuno=temp;
			}
	for(i=0;i<3&&i<n;i++)
		cout<<num[i].stuno<<" "<<num[i].score0<<endl;
	return 0;
}

