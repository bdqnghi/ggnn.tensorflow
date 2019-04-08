int apple(int m,int n);
int maxapple(int m,int n){
if(m==n)
return 1;
if(n==1)
return 1;
else return apple(m-n,n);}
int minapple(int m,int n){
if(n==2)
return 1;
if(n==1)
return 0;
else
return apple(m,n-1);
}
int apple(int m,int n){
if(m<1||n<1)
return 0;
if(n==1)
return 1;
else
return maxapple(m,n)+minapple(m,n);
}
int main(){
int i,k,m,n;
cin>>k;
for(i=1;i<=k-1;i++){
cin>>m>>n;
cout<<apple(m,n)<<endl;}
cin>>m>>n;
cout<<apple(m,n);
}
