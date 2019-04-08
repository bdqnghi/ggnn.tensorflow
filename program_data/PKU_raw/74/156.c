int primejud(int n){
int i;
for(i=2;i<n/2;i++)
if(n%i==0)
break;
if(i>=n/2) return 1;
else return 0;}
int huiwenjud(int n){
int i,c,a=log10(n),b[10];
for(i=0;i<=a;i++){
b[i]=n/pow(10,a-i);
n=n%((int)pow(10,a-i));
}
c=(a+1)/2;
for(i=0;i<c;i++)
if(b[i]!=b[a-i])
break;
if(i>=c) return 1;
else return 0;
}
int main(){
	int a,b,i,j=0,num[100]={0};
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
		if(primejud(i)&&huiwenjud(i))
		num[j++]=i;
if(j==0) printf("no");
else{
		for(i=0;i<j-1;i++)
printf("%d,",num[i]);
		printf("%d",num[j-1]);}
return 0;}