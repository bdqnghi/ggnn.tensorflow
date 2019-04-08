int main()                               //?????
{
int n,k,i;
cin>>n>>k;
int apple[n+1];
apple[1]=n+k;                              //?????????????1
while(true){
for(i=2;i<=n;i++)
{apple[i]=(apple[i-1]-k)/n*(n-1);
if(apple[i]%n!=k) break;
}
if(i==n+1) break;
else apple[1]+=n;}
for(i=1;i<=n;i++)
{cout<<apple[i]<<endl;
break;}
return 0;
}
