char a[260], b[260];
int a1[260]={0}, b1[260]={0}, result[260]={0}, i;
void add(int x){
	for(i=0;i<x;i++){
		result[i]=result[i]+a1[i]+b1[i];
		if(result[i]>=10){
			result[i]=result[i]-10;
			result[i+1]=1;
		}
	}
}
int main(){
	cin >> a >> b;
	int x1=strlen(a), x2=strlen(b), x;
	x= x1 > x2 ? x1 : x2;
	for(i=0;i<x1;i++)
		a1[i]=a[x1-1-i]-48;
	for(i=0;i<x2;i++)
		b1[i]=b[x2-1-i]-48;
	add(x);
	for(i=x;i>=0;i--)
		if(result[i]!=0)
			break;
		for(i= i >= 0 ? i : 0; i >= 0; i--)
			cout << result[i];
		cout<< endl;
		return 0;
}

