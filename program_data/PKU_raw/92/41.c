int Compare(const void *a, const void *b) { 
	return *(int *)a - *(int *)b;
} 
int main() {
	int n;
	int q[1000],t[1000];
	int i,mon,qmax,tmax,qmin,tmin;
	while (cin>>n) {
		if (n==0) return 0;
		for (i=0;i<n;i++)
			cin>>t[i];
		for (i=0;i<n;i++)
			cin>>q[i];
		mon=0;
		qsort(t,n,sizeof(int),Compare);
		qsort(q,n,sizeof(int),Compare);
		tmin=qmin=0;
		tmax=qmax=n-1;
		for (i=0;i<n;i++) {
			if (t[tmax]>q[qmax]) {
				mon+=200;
				tmax--;
				qmax--;
			}
			else if (t[tmin]>q[qmin]) {
				mon+=200;
				tmin++;
				qmin++;
			}
			else {
				if (t[tmin]!=q[qmax])
					mon-=200;
				tmin++;
				qmax--;
			}
		}
		cout<<mon<<endl;
	}
	return 0;
}