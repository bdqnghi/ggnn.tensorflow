int a[1000],b[1000];
int c[2000];
int p,q;

void read(void){//???????????????????
	cin>>p>>q;
	int i=0;
    for(i=0;i<p;i++)cin>>a[i];
    for(i=0;i<q;i++)cin>>b[i];
}

void increaseSort(void){//???????????
	sort(a+0,a+p);
	sort(b+0,b+q);
}

void merge(void){// ??????????
	int i=0;
	for(i=0;i<p;i++)c[i]=a[i];
	for(i=p;i<p+q;i++)c[i]=b[i-p];
}

void print(void){//?????????
	int i=0;
	cout<<c[0];
	for(i=1;i<p+q;i++)cout<<" "<<c[i];
	cout<<endl;
}

int main()
{
	read();
	increaseSort();
	merge();
	print();
	return 0;
}
