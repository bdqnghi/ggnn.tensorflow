int F(int n);
int main(){
int n,z,i,sz[1000],result;
scanf("%d",&z);

for(i=0;i<z;i++){
scanf("%d",&(sz[i]));
}

for(i=0;i<z;i++){
n=sz[i];
result=F(n);
printf("%d\n",result);
}

return 0;
}



int F(int n){
scanf("%d",&n);
if(n==1){return 1;}
if(n==2){return 1;}
else{return F(n-1)+F(n-2);}
}
