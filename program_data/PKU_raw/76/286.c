int main(){
    int a[50000], b[50000], n, s[50000];
    int m=0;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    int c=a[0];
    int d=b[0];
    for(int t=0;t<n;t++){
        if(c>a[t]){c=a[t];}
    }
    for(int i=0;i<n;i++){
        if(b[i]>d){d=b[i];}
    }
   for(int i=c;i<d;i++){
       s[i]=1;
   for(int t=0;t<n;t++){
       if(i>=a[t] && i<b[t]){
           s[i]=0;
       }
       
   }
   }
   for(int i=c;i<d;i++){
       m=m+s[i];
   }
   if(m==0){printf("%d %d", c, d);}else{printf("no");}
return 0;
}