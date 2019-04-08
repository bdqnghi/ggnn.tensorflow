int main(){
    int n,i,k;
    scanf("%d",&n);
    int geshu[100];
    double shuju[100],S[100];
    for(i=0;i<n;i++){
       scanf("%d",&geshu[i]);
       for(k=1;k<geshu[i]+1;k++){
          scanf("%lf",&(shuju[k]));
       }

    double sum=0,a,b=0;
    for(k=1;k<geshu[i]+1;k++){
       sum+=shuju[k];
    }
    a=sum/(geshu[i]);
    for(k=1;k<geshu[i]+1;k++){
       b+=(shuju[k]-a)*(shuju[k]-a);
    }
    S[i]=sqrt(b/geshu[i]); 
}
    for(i=0;i<n;i++){
      printf("%.5lf\n",S[i]);
    }
return 0;
}
    