const int SIZE=1005;
int tianji[SIZE];
int qiwang[SIZE];
int win=0;
int mycmp(const void * arg1, const void * arg2){
	return *(int*)arg2-*(int*)arg1;
}
int main()
{
	int n=0;
	int i;
	int b1,b2,e1,e2;
	while (cin>>n&&n!=0){
		win=0;
		for (i=0;i<n;i++)
			cin>>tianji[i];
		for (i=0;i<n;i++)
			cin>>qiwang[i];
		qsort(tianji,n,sizeof(int),mycmp);
		qsort(qiwang,n,sizeof(int),mycmp);
		b1=0,b2=0,e1=n-1,e2=n-1;
		while (true){
			if (tianji[b1]>qiwang[b2]){
				b1++;
				b2++;
				win+=200;
			}
			else if (tianji[e1]>qiwang[e2]){
				e1--;
				e2--;
				win+=200;
			}
			else{
				if (tianji[e1]<qiwang[b2])
					win-=200;
				e1--;
				b2++;
			}
			if (b1>e1)
				break;
		}
		cout<<win<<endl;
	}
	return 0;
}
