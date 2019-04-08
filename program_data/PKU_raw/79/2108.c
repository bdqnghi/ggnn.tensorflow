int f(int m,int n)
{
int i;
int k=0;
for(i=2;i<=n;i++)
k=((m%i)+k)%i;
return k;
}
int main(){
int m,n,c[300],d,j;
for(j=0;j>-1;j++){
scanf("%d %d",&n,&m);
if(m==0) {d=j;  break;}
c[j]=f(m,n)+1;}

for(j=0;j<d;j++)
{printf("%d\n",c[j]);}

return 0;
}