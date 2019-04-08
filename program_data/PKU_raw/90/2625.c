int fun(int m,int n,int j);
int main(void)
{ int n,m,s,t;
scanf("%d\n",&t);
while(t>0){
scanf("%d %d\n",&m,&n);
if(n>m) n=m;
s=fun(m,n,0);
printf("%d\n",s);
t--;
}
}
int fun(int m,int n,int j)
{ int i,s=0;
if(n==1) return m>=j;
for(i=j;i<m;i++) s+=fun(m-i,n-1,i);

return s;
}