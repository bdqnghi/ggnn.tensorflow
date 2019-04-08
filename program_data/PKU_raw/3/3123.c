int main(){
int n,k,a;
scanf("%d %d",&n,&k);
int sz[max]={0};
for(int i=0;i<n;i++){
    scanf("%d",&sz[i]);
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(sz[i]+sz[j]==k&&(i!=j)){
            a=1;

        }
    }
}
switch(a)
{
    case 1:printf("yes");break;
    default:printf("no");
}
return 0;
}