int main(){
	int zhi(int);
	int hui(int);
	int a[100];
int m,n,i,s=1,p,q;
scanf("%d %d",&m,&n);
for(i=m,p=0;i<=n;i++){
    if(zhi(i)==1&&hui(i)==1){
	   a[p]=i;p+=1;
		s=0;
	}
}
if(s){
  printf("no");
}
else{
for(q=0;q<=p-2;q++)
printf("%d,",a[q]);
printf("%d",a[p-1]);
}
return 0;
}
int zhi(int n)
{
	int i,m;
if(n==2)
m=1;
else{
for(i=2;i<=sqrt(n);i++)
{if(n%i==0)break;}
if(i>sqrt(n))m=1;
else m=0;}
return (m);
}
int hui(int n){
int a[10],i;
	int s=1,j;
	for(i=0;n>0;i++){
	   a[i]=n%10;
	   n=n/10;
	}
for(j=0;j<=i-1;j++){
	   if(a[j]!=a[i-1-j])
         s=0;
	}

	return s;

}
