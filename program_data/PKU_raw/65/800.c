int main(){
    int n;
    scanf("%d",&n);
    int i,a[200],b[200],t=0,e,p=0,m;
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
        {t++;}
else if(a[i]==b[i]){
p++;}
    }
m=n-p;
if(m!=0){
    if(m%2==0){
        e=m/2;
        if(t==e)
        printf("Tie");
else if(t>e)
printf("A");
else
printf("B");     
    }  
else{
e=m/2;
if(t>e)
printf("A");
else
printf("B");} }
else 
printf("Tie");
return 0;
}
