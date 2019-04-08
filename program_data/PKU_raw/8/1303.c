int a[10000],b[10000];
int sizea,sizeb;
void read(){
	cin>>sizea>>sizeb;
	int i;
	for(i=0;i<=sizea-1;i++)
		cin>>a[i];
	for(i=0;i<=sizeb-1;i++)
		cin>>b[i];
}
void order(int n,int a[]){
	int i,j;
	int temp;
	for(i=n-1;i>=1;i--)
		for(j=0;j<=i-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
}
void paixu(){
	order(sizea,a);
	order(sizeb,b);
}
void mix(){
	int i;
	for(i=0;i<=sizeb-1;i++)
		a[sizea+i]=b[i];
}
void print (){
	cout<<a[0];
	for(int i=1;i<=sizea+sizeb-1;i++)
		cout<<" "<<a[i];
}
int main(){
	read();
	paixu();
	mix();
	print();
}