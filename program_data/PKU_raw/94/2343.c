int main(){
int N;
int i=0;
int sz[500];
int js[500];
scanf("%d",&N);
for(int m=0;m<N;m++){
   scanf("%d",&(sz[m]));
   if(sz[m]%2!=0){
       js[i]=sz[m];
       i++;
   }
}
for(int n=1;n<=i;n++){
    int e;
    for(int k=0;k<i-n;k++){
    if(js[k]>js[k+1]){
        e=js[k];
        js[k]=js[k+1];
        js[k+1]=e;
    }
    }
}
for(int a=0;a<i;a++){
    if(a<i-1){printf("%d,",js[a]);}
    if(a==i-1){printf("%d",js[a]);}
}
return 0;
}



