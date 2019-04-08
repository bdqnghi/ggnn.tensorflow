/*
 *???pro.cpp
 *????????????
 *??: 2012-11-27
 *?????1200012825
 */

int a[100][100];
int sum=0;
int n;
void rows(int num);
void columns(int num);
void deletes(int num);
int main(void)
{

	cin>>n;
	for(int q=1;q<=n;q++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];//??
			}
		}
		for(int i=1;i<=n-1;i++){//??n-1???
			rows(i);
			columns(i);
			sum=sum+a[2][2];
			deletes(i);
		}
		cout<<sum<<endl;//??
		sum=0;
	}
	return 0;
}
void rows(int num)//???????
{
	int min1[100];
	for(int i=1;i<=n+1-num;i++){
		min1[i]=a[i][1];
	}
	for(int i=1;i<=n+1-num;i++){
		for(int j=1;j<=n+1-num;j++){
			if(min1[i]>a[i][j]){
				min1[i]=a[i][j];//????
			}
		}
		for(int j=1;j<=n+1-num;j++){
			a[i][j]=a[i][j]-min1[i];//?????
		}
	}
}
void columns(int num)//???????
{
	int min2[100];
	for(int j=1;j<=n+1-num;j++){
		min2[j]=a[1][j];
	}
	for(int j=1;j<=n+1-num;j++){
		for(int i=1;i<=n+1-num;i++){
			if(min2[j]>a[i][j]){
				min2[j]=a[i][j];
			}
		}
		for(int i=1;i<=n+1-num;i++){
			a[i][j]=a[i][j]-min2[j];
		}
	}
}
void deletes(int num){//????????
	for(int i=2;i<n+1-num;i++){
		for(int j=1;j<=n+1-num;j++){
			a[i][j]=a[i+1][j];
		}
	}
	for(int j=2;j<n+1-num;j++){
		for(int i=1;i<n+1-num;i++){
			a[i][j]=a[i][j+1];
		}
	}
}
