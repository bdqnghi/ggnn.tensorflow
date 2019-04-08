void read(int *a,int *b,int num1,int num2);
void sort(int *a,int num1);
void merge(int *a,int *b,int *c,int num1,int num2);
void print(int *a,int num1);
int main()
{
	int a[100],b[100],c[200];
	int num1,num2;
	cin>>num1>>num2;
	read(a,b,num1,num2);
	sort(a,num1);
	sort(b,num2);
	merge(a,b,c,num1,num2);
	print(c,num1+num2);
	return 0;
}

void read(int *a,int *b,int num1,int num2)
{
	int i;
	for(i=0;i<num1;i++){
		cin>>a[i];
	}
	for(i=0;i<num2;i++){
		cin>>b[i];
	}
}

void sort(int *a,int num1)
{
	int i,j;
	for(i=0;i<num1;i++){
		for(j=i+1;j<num1;j++){
			if(a[i]>a[j]){
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

void merge(int *a,int *b,int *c,int num1,int num2)
{
	int i;
	for(i=0;i<num1;i++){
		c[i]=a[i];
	}
	for(i=num1;i<num1+num2;i++){
		c[i]=b[i-num1];
	}
}

void print(int *a,int num1)
{
	int i;
	for(i=0;i<num1-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[num1-1]<<endl;
}