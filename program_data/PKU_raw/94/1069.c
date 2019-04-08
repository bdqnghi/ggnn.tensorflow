/*
 *???: increasing_odds.cpp
 *??: ???
 *????: 2012-11-05
 *??: ?????????????????
 */



int main()
{
	int a[MAXN+10];
	int n,nOdds=0;

	cin >> n;
	for (int i=0;i<n;i++)
		cin >> a[i];
	for (int i=0;i<n;i++){
		if (a[i]&1) //??a[i]???
			a[nOdds++]=a[i]; //?????1
	}
	for (int i=0;i<nOdds;i++){ //?????
		for (int j=0;j<nOdds-i-1;j++){
			if (a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for (int i=0;i<nOdds;i++){
		cout << a[i];
		if (i!=nOdds-1)
			cout << ',';
		else
			cout << endl;
	}
	return 0;
}

