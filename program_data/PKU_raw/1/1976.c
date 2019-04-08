int f(int a,int min);
int main()
{
	int n,i,a;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		printf("%d\n",f(a,2));}
	return 0;
}
int f(int a,int min)
{ 
	if(a < min){ 
		return 0;} 
	int result = 1; 
	for(int i = min;i<a;i++){ 
		if(a % i == 0){ 
			result += f(a/i,i);}} 
	return result; 
} 