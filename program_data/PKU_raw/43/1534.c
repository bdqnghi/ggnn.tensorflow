
int sushu(int a){
int flag=1;
int m,i;
m=sqrt(a);
for(i=2;i<=m;i++){
if(a%i==0) flag=0;}
return flag;}

int main()
{
	int m,x,y,k,i;
	scanf("%d",&m);
	
	for(k=3;k<=m/2;k+=2){
		if(sushu(k)&&sushu(m-k)) printf("%d %d\n",k,m-k);}	
	
	return 0;
}
