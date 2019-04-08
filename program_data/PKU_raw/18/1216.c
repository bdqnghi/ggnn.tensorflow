//????HW8_02.cxx
//?????(1100019007)
//???2012-11-18
//????????????

int arr[100][100];
void solve(int n);//??
void arrayin(int n);//????
int down_cast(int n);//??????
void matrix_out(int n);//????
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)solve(n);
	return 0;
}
void arrayin(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
}
void solve(int n){
	arrayin(n);
	cout<<down_cast(n)<<endl;
}
int down_cast(int n){
	if(n==1)return 0;
	int min,res;
	for(int i=0;i<n;i++){
		min=65535;
		for(int j=0;j<n;j++)if(arr[i][j]<min)min=arr[i][j];
		for(int j=0;j<n;j++)arr[i][j]-=min;
	}//???
	for(int i=0;i<n;i++){
		min=65535;
		for(int j=0;j<n;j++)if(arr[j][i]<min)min=arr[j][i];
		for(int j=0;j<n;j++)arr[j][i]-=min;
	}//???
	res=arr[1][1];
	for(int i=2;i<n;i++)for(int j=0;j<n;j++)arr[i-1][j]=arr[i][j];
	for(int i=2;i<n;i++)for(int j=0;j<n;j++)arr[j][i-1]=arr[j][i];
	//matrix_out(n);
	return res+down_cast(n-1);//????
}
void matrix_out(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
