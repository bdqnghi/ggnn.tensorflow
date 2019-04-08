int main(){
  int n,a[10000],b[10000],i,k,num[50000],t=0,min,r,max,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
  }
  for(i=0;i<n;i++){
    for(k=a[i];k<=b[i];k++){
      num[t]=k;
      t++;
    }
   }
  min=a[1];
  max=a[1];
  for(r=0;r<t;r++){
    if(num[r]<min){
      min=num[r];
    }
   }
  for(r=0;r<t;r++){
    if(num[r]>max){
      max=num[r];
    }
   }
  for(r=min;r<=max;r++){
    for(i=0;i<t;i++){
      if(num[i]==r){
        c=1;
        break;
      }else{
        c=0;
      }
     }
     if(c==1)
      continue;
     else
      break;
    }
   if(c==1){
    for(r=min;r<max;r++){
    for(i=0;i<t;i++){
      if((r>=a[i])&&(r+1<=b[i])){
       c=1;
       break;
      }else{
       c=0;
      }
     }
     if(c==1)
     continue;
     else
     break;
    }
}
     
   if(c==0)
     printf("no");
   else
     printf("%d %d",min,max);
   return 0;
  }

