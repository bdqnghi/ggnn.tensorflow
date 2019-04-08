int main(){
   int n,i,j,u;
   int a[100000],b[100000],c[100000];
   scanf("%d\n",&n);
   for(i=0;i<n;i++){
    scanf("%d %d\n",&a[i],&b[i]);
   }
   int max=0;
   int min;
   for(i=0;i<n;i++){
   if(max<b[i]){max=b[i];}
    }
   min=max;
   for(i=0;i<n;i++){
    if(min>a[i]){min=a[i];}
    }
   for(i=min;i<=max;i++){c[i]=0;}
   for(i=0;i<n;i++){
     for(j=a[i];j<=b[i]-1;j++){c[j]=1;}
    }
    c[max]=1;
    for(i=min;i<=max;i++){
      if(c[i]==0){ u=1;}
     }
     if(u==1){printf("no");}
     else{printf("%d %d",min,max);}
     return 0;
}