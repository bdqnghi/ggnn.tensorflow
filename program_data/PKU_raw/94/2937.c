int main(){
int n;
scanf("%d",&n);
int b=0;
int sz[n],js[b];

for(int i=0;i<n;i++){
scanf("%d",&sz[i]);
if(sz[i]%2==1){
js[b]=sz[i];
b++;
}
}
int e;
for(int k=1;k<=b;k++){
for(int i=0;i<b-k;i++){
if(js[i]>js[i+1]){
e=js[i+1];
js[i+1]=js[i];
js[i]=e;
}
}
}
for(int i=0;i<b-1;i++){
printf("%d,",js[i]);
}
printf("%d",js[b-1]);
return 0;
}