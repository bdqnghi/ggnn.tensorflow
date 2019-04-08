int main(){
int m,n,fm,fn,i,j;double s=0;
scanf("%d",&m);
for(i=1;i<=m;i++){s=0;scanf("%d",&n);fm=1;fn=1;
for(j=1;j<=n;j++){fm=fm+fn;fn=fm-fn;s+=(1.0*fm)/fn;}


printf("%.3f\n",s);



}

return 0;
}