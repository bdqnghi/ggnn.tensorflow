int n,k;
int isok(int sum,int step){
    if(step==n)return 1;
    if(sum%(n-1))return 0;
    return isok(sum/(n-1)*n+k,step+1);
}
int main(){
    scanf("%d%d",&n,&k);
    int i,s=1;

    while(1){
      if(isok(s*n+k,1)){
                            s=s*n+k;
                            for(i=1;i<n;i++)s=s*n/(n-1)+k;
                            printf("%d\n",s);
                            break;
                            }
      s++;
      }
      return 0;
}
