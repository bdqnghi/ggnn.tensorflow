
int n;
int a[1001], b[1001];	//a,b??????????????
int win, lose;		//?????????

int cmp(const void *e1, const void *e2){
	return *(int *)e1 - *(int *)e2;
}

void cal(int m)
{
	if (m==0)
		return;

	if (a[1]>b[m]){
		win += m;
		return;
	}

	if (b[1]>a[m]){
		lose += m;
	}

	if (a[1]==b[m]){
		for (int i=1; i<m; i++){
			a[i] = a[i+1];
		}			
		cal(m-1);
		return;
	}

	if (b[1]==a[m]){
		for (int i=1; i<m; i++){
			b[i] = b[i+1];
		}
		cal(m-1);
		return;
	}

	int i,j;

	for (i=1; i<=m; i++){
		if (a[i]<=b[1])
			continue;
		for (j=1; j<=m; j++){
			if (a[i]>b[j] && j<m)
				continue;
			if (a[i]<=b[j])
				j--;
			for (int t=i; t<m; t++)
				a[t] = a[t+1];
			for (int t=j; t<m; t++)
				b[t] = b[t+1];
			win++;
			cal(m-1);
			return;
		}
	}
}


int main()
{
	while(true){
		cin>>n;
		if (n==0)
			break;
		for (int i=1; i<=n; i++)
			cin>>a[i];
		for (int i=1; i<=n; i++)
			cin>>b[i];
		a[0] = b[0] = 0;
		qsort(a, n+1, sizeof(int), cmp);
		qsort(b, n+1, sizeof(int), cmp);
		win=0;
		lose=0;
		cal(n);
		cout<<200*(win-lose)<<endl;
	}
	return 0;
}