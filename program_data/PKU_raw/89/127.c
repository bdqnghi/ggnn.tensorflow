int n,a[10000];
void read(){
	int i,j;
	for (scanf("%d%d%d",&n,&i,&j); i+j!=0;scanf("%d%d",&i,&j)){
		a[j]++;
	}
}

	
int main(){
	int i;
	read();
	for (i=0;i<n;i++)
		if (a[i]==n-1) printf("%d\n",i);
	return 0;
}