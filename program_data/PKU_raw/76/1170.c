int main(){
int i,n,g=1,a[50000],b[50000],min,max;
double x,t;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
	}
min=a[0];max=b[0];
for(i=1;i<n;i++){
if(a[i]<min){
             min=a[i];
             }
if(b[i]>max){
             max=b[i];
             }
}
t=0.5+(double)min;
for(x=t;x<max;x=x+1.0){
for(i=0;i<n;i++){
      if(a[i]<x&&x<b[i]){
                         break;
                         }
      else if(i==n-1){
           g=0;
           printf("no");
           break;
           }
      }
if(g==0){
         break;
}
else if(x==(float)max-0.5){
     printf("%d %d",min,max);
     }
}
return 0;
}
