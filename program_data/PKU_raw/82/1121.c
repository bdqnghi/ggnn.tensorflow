int main (){
  int n,i,sum,temp,m;
  sum=0;
  temp=0;
  int a[200];
  int b[200];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
  }
  for(i=0;i<n;i++){
    if (a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
     m=1;
    }else {
     m=0;
    }
    if(m==0){
      if(temp>sum){
       sum=temp;
       }
       temp=0;
  }
  else {
   temp++;
  }
  }
    if(temp>sum){
     sum=temp;
    }
   printf("%d",sum);
  return 0;
}
