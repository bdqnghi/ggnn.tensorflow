

int a[100][100]={0};//????
int n=0;
void find()
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>*(*(a+i)+j);
	int sum=0;

	int l=0;
	int m=10000;

	for(l=n;l>1;l--){
	for(i=0;i<l;i++){m=10000;
		for(j=0;j<l;j++)
		m=min(m,*(*(a+i)+j));
		for(j=0;j<l;j++)
			*(*(a+i)+j)=*(*(a+i)+j)-m;}
	for(j=0;j<l;j++){
		m=10000;
		for(i=0;i<l;i++)
			m=min(m,*(*(a+i)+j));
		for(i=0;i<l;i++)
			*(*(a+i)+j)=*(*(a+i)+j)-m;}
	sum=sum+*(*(a+1)+1);
	for(i=1;i<l;i++)
		for(j=0;j<l;j++)
		*(*(a+i)+j)=*(*(a+i+1)+j);
	for(j=1;j<l;j++)
		for(i=0;i<l;i++)
			*(*(a+i)+j)=*(*(a+i)+j+1);}
	cout<<sum<<endl;

}



int main()
{
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	find();
	//for(i=0;i<n;i++){		for(j=0;j<n;j++)			cout<<a[i][j];cout<<endl;}



  	return 0;
}