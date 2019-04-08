int main(){
    int m,n,e;
    int i=0,j=0;
    double sum=0;
    scanf("%d",&m);
    for(i=0;i<m;i++){
       scanf("%d",&n);
       int k=2,l=1;
       for(j=0;j<n;j++){
          sum=sum+(double)k/l;
          e=k;
          k=k+l;
          l=e;
       }
       printf("%.3lf\n",sum);
	   sum=0;
    }
    return 0;
}
  
