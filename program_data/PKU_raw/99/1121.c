int main(){
int m,n,i,sz[100];
double a,b,c,d;
scanf("%d",&n);
a=0;b=0;c=0;d=0;
for(i=0;i<n;i++){
scanf("%d",&(sz[i]));
}
for(i=0;i<n;i++){
    if(sz[i]<=18){
        a=a+1;
    }else if(sz[i]>=19&&sz[i]<=35){
        b=b+1;
    }else if(sz[i]>=36&&sz[i]<=60){
        c=c+1;
    }else{
        d=d+1;
    }
}
a=100*a/n;
b=100*b/n;
c=100*c/n;
d=100*d/n;
printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\nOver60: %.2lf%%\n",a,b,c,d);
return 0;
}