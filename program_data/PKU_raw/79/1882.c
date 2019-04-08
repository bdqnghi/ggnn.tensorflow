int main(){
int i,n,m,p,w,x=0,a[10000];
for(w=1;w<100;w++)
{
scanf("%d%d",&n,&m);
if(n==0 && m==0){
break;
}
int next[n+1];
for(i=1;i<n;i++){
next[i]=i+1;
}
next[n]=1;
p=n;
for(i=1;n>0;i++){
if(i%m==0){
    next[p]=next[next[p]];
   --n;
   }
   else{
   p=next[p];
  }
} a[w]=p;
  x++;
}
   for(w=1;w<=x;w++)

   {
        printf("%d\n",a[w]);
   }

return 0;
}
