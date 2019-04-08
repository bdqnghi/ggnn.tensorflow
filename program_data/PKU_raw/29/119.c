int main(){
  int m,i,j,n,w;
  double sum[100];
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%d",&j);
    n=j;
if(n==1){
    sum[i]=2.0/1;}
else if(n>=2){sum[i]=2.0/1+3.0/2;}
    double sz1[100],sz2[100];
    sz1[0]=2;
    sz1[1]=3;
    sz2[0]=1;
    sz2[1]=2;
    for(w=2;w<n;w++){
      sz1[w]=sz1[w-1]+sz1[w-2];
      sz2[w]=sz2[w-1]+sz2[w-2];
      sum[i]=sum[i]+sz1[w]/sz2[w];
      }
    printf("%.3lf\n",sum[i]);
}
    return 0;
} 