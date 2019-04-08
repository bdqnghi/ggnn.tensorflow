int main()
{
int n;
scanf("%d",&n);
int a[N],b[N],i;
for( i=0;i<n;i++)
{
	scanf("%d%d",&(a[i]),&(b[i]));
}
double c;
c=b[0]*1.0/a[0];

for(i=1;i<n;i++){
if((b[i]*1.0/a[i]-c)*100>5){
	printf("better\n");
}else if((b[i]*1.0/a[i]-c)*100<-5){
	printf("worse\n");
}else{
	printf("same\n");
}
}
	return 0;
}