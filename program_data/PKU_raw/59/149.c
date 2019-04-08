

int n=0;
int m=0;
char a[100][100]={'\0'};
int b[100][100]={0};
int c[100][100]={0};
void find()
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)c[i][j]=b[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(b[i][j]==2){
				c[i][j]=2;
				if(b[i+1][j]==1)c[i+1][j]=2;
				if(b[i-1][j]==1)c[i-1][j]=2;
				if(b[i][j+1]==1)c[i][j+1]=2;
				if(b[i][j-1]==1)c[i][j-1]=2;}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)b[i][j]=c[i][j];

}

int main()
{
	cin>>n;
	int i=0,j=0;
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(a[i][j]=='.')b[i][j]=1;
			if(a[i][j]=='@')b[i][j]=2;}
		//for(i=0;i<n;i++){			for(j=0;j<n;j++)cout<<b[i][j];cout<<endl;}
	int m=0;
	cin>>m;
	for(i=1;i<m;i++)
		find();
	int num=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(b[i][j]==2)
				num++;
	cout<<num;


 	return 0;
}