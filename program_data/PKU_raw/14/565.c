int main()
{
	int n;
	cin>>n;
	struct student
	{
		int ID;
		int chinese;
		int math;
		int total;
	}score[100000];
	for(int i=0;i<n;i++)
	{
		cin>>score[i].ID>>score[i].chinese>>score[i].math;
		score[i].total=score[i].chinese+score[i].math;
	}
	for(int i=0;i<3;i++)
		for(int j=n-1;j>0;j--)
			if(score[j].total>score[j-1].total)
			{
				struct student temp=score[j];
			    score[j]=score[j-1];
			    score[j-1]=temp;
			}
	if(n==2)
			for(int i=0;i<n;i++)
				cout<<score[i].ID<<score[i].total<<endl;
	else {
	for(int i=0;i<3;i++)
		cout<<score[i].ID<<' '<<score[i].total<<endl;
	}
}
