int main(){
int i,n,a[500],b[500],m=0,p=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
m=m+1;}
else if(a[i]==b[i]){continue;}
else{p=p+1;}
}

if(m>p){printf("A");}
else if(m<p){printf("B");}
else{printf("Tie");}
return 0;
}

