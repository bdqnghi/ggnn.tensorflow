


int main(){
	int n, num=1, i, j, flag=0;
	int a[50]={1};
	cin >> n;
	for (i=1;i<=n;i++){
		flag=0;
		for (j=0;j<num;j++){
			a[j]=a[j]*2+flag;
			flag=0;
			if (a[j]>=10){
				a[j]=a[j]-10;
				flag=1;
			}
		}
		if (flag==1){
			a[num]=1;
			num++;
		}
	}
	for (i=num-1;i>=0;i--){
		cout << a[i];
	}
}
