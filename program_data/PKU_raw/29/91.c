int main(){
 int m,n,i,k,a,b;
 double x,sum;
  scanf("%d ",&m);
  for(k=0;k<m;k++){
     scanf("%d ",&n);
    for(i=0,a=2,b=1;i<n;i++,a=a+b,b=a-b){
        x=(double)a/b; 
        sum+=x;
    }
     printf("%.3lf\n",sum);
     sum=0;
  }

   return 0;
}
