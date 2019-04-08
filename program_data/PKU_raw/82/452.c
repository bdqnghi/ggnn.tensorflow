int main(){
  int n,i,a[99],b[99],pd[99],y=0,j,e,s,max,h[99],x=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
    if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
      pd[i]=1;y=1;
    }else{pd[i]=0;}
  }
  j=0;
  for(s=0;s<n;s++){
    if(pd[s]==1&&pd[s]==pd[s+1]&&(s==0||pd[s-1]==0)){
        e=s+1;x=1;
        while(1){
             if(e==n-1||pd[e+1]==0){break;}
             e++;
        }
    h[j]=e-s+1;
    j++;
    }
  }
 if(y==1&&x==1){
  max=h[0];
  for(i=0;i<j;i++){
    if(max<h[i]){max=h[i];}
  }
  printf("%d",max);}
 else if(y==0){printf("0");}
 else{printf("1");}
  return 0;
}
