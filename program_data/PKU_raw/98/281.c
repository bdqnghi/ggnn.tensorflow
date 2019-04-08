/*
 *
 * ??????
 * ???2011-01-09
 * ?????? 1000012774
 * ???
 */

int main()
{
	int n,i,j,sum;
	int len[1000];
	char a[1000][40],b[1000][40];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
        len[i]=strlen(a[i])+1;
	}
	i=0;
	while(i<n){
		sum=0;
		while((sum+len[i])<=81){
			sum=sum+len[i];
			if((((sum+len[i+1])<=81)+(i<n-1)==2))
			cout<<a[i]<<" ";
			else
				cout<<a[i];
			i++;
		}
		cout<<endl;

	}
	cout<<endl;
	return 0;
}

