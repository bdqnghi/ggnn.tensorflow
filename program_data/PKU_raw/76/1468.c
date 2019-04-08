int main(){
int n,i,min=0,max=0;
float j;
int a[50000],b[50000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d\n",&a[i],&b[i]);
}
for(i=0;i<n;i++){
if(i==0){
min=a[0];max=b[0];
}
if(a[i]<min)min=a[i];                            //?????//
if(b[i]>max)max=b[i];
}
 
for(j=min+0.0;j<=max+0.0;j=j+0.5){
  for(i=0;i<n;i++){                                           
    if(a[i]<=j&&j<=b[i])break;       
  }
  if(i==n){ printf("no");break;}
}
 
if(j>max)printf("%d %d",min,max);
return 0;
}