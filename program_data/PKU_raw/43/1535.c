
int sushu(int x){
if(x==1) return 0;
if(x==2||x==3) return 1;
int m=sqrt(x);
int i;
for(i=2;i<=m;i++){
if(x%i==0) return 0;
}
if(i==m+1) return 1;
}

int main(int argc, char* argv[])
{
int m;
scanf("%d",&m);

int i;
for(i=3;i<=m/2;i+=2){
if(sushu(i)&&sushu(m-i)) printf("%d %d\n",i,m-i);}
	return 0;
}

