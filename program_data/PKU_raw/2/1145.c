int main()
{
	int n;
	cin>>n;
	int book[1000];
	char author[1000][10];
	int i,j;
	for(i=0;i<n;i++){
		cin>>book[i]>>author[i];
	}
	int num[26]={0};
	for(i=0;i<n;i++){
		int length;
		length=strlen(author[i]);
		for(j=0;j<length;j++){
			num[author[i][j]-'A']++;
		}
	}
	int max=0;
	char maxi;
	for(i=0;i<26;i++){
		if(num[i]>max){
			max=num[i];
			maxi='A'+i;
		}
	}
	cout<<maxi<<endl;
	int sum=0;
	for(i=0;i<n;i++){
		int length;
		length=strlen(author[i]);
		for(j=0;j<length;j++){
			if(author[i][j]==maxi){
				sum++;
			}
		}
	}
	cout<<sum<<endl;
	for(i=0;i<n;i++){
		int length;
		length=strlen(author[i]);
		for(j=0;j<length;j++){
			if(author[i][j]==maxi){
				cout<<book[i]<<endl;
			}
		}
	}
	return 0;
}