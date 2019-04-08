int main(){
int n,k,i,m,sz1[1000],sz2[1000];
int t=0;
scanf("%d%d\n",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&(sz1[i]));
    sz2[i]=sz1[i];
}for(m=0;m<n;m++){
    for(i=0;i<n;i++){
        if(k==sz1[m]+sz2[i]){t++;}
    }
}if(t>0){
    printf("yes");
}else{printf("no");}
    return 0;
}
