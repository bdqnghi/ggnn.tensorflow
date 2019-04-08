int main(){
int n,i,q,j=0,k=0;
double m[40],f[40],e;
scanf("%d",&n);
struct p{
    char x[7];
    double h;
}a[40];
for(i=0;i<n;i++){
    scanf("%s%lf",&a[i].x,&a[i].h);
    if(strcmp("female",a[i].x)==0){
        f[j]=a[i].h;j++;
    }else{ m[k]=a[i].h;k++;}
}
for(q=1;q<=j;q++){
    for(i=0;i<j-q;i++){
        if(f[i]>f[i+1]){
           e=f[i+1];f[i+1]=f[i];f[i]=e;
        }
    }
}
for(q=1;q<=k;q++){
    for(i=0;i<k-q;i++){
        if(m[i]>m[i+1]){
            e=m[i+1];m[i+1]=m[i];m[i]=e;
         }
    }
}
printf("%.2lf",m[0]);
for(i=1;i<k;i++){
    printf(" %.2lf",m[i]);
}
for(i=j-1;i>=0;i--){
    printf(" %.2lf",f[i]);
}
return 0;
}



