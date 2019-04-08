void swap(double num[],int a,int b){
	double s = num[a];
	num[a] = num[b];
	num[b] = s;
	return;
	}
int divide(double num[],int a,int b){
	int k = a-1;
	for(int i = a;i<b;i++){
		if(num[i]<num[b]) swap(num,++k,i);
		}
	swap(num,++k,b);
	return k;
	}
void qsort(double num[],int a,int b){
	if(a<b){
		int q = divide(num,a,b);
		qsort(num,a,q-1);
		qsort(num,q+1,b);
		}
	return;
	}
double abs(double s){
	if(s>0) return s;
	return -s;
	}
int main(){
	int n;
	double num[1010],sum;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>num[i];
		sum+=num[i];
		}
	qsort(num,0,n-1);
	sum/=n;
	double a = abs(num[n-1]-sum),b = abs(num[0]-sum);
	if(a<b) cout<<num[0]<<endl;
	else if(a==b) printf("%d,%d\n",(int)num[0],(int)num[n-1]);
	else cout<<num[n-1]<<endl;
	return 0;
	}
