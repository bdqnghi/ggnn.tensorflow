int main(){
int n,sz[N],an[X],j=0,i=0,m=0,a=0,b=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&(sz[i]));
}
for(m=0;m<n;m++){
if(sz[m]%2==0)
continue;
else{
an[j]=sz[m];
j=j+1;
}
}
for(int k=1;k<=j;k++){
int e;
for(int a=0;a<j-k;a++){
if(an[a]>an[a+1]){
e=an[a+1];
an[a+1]=an[a];
an[a]=e;
}
}
}
for(b=0;b<j-1;b++){
printf("%d,",an[b]);
}
printf("%d",an[j-1]);
return 0;
}
