int main(){
    int n,i,l,m=0,j;
    char zfc[21];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",zfc);
        l=strlen(zfc);
        if((zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')||(zfc[0]=='_')){
            for(j=1;j<l;j++){
            if(!((zfc[j]>='a'&&zfc[j]<='z')||(zfc[j]>='A'&&zfc[j]<='Z')||(zfc[j]=='_')||(zfc[j]>='0'&&zfc[j]<='9'))){
                puts("no");
                break;
                }
                if(j==l-1){
                    puts("yes");
                }
            }
        }else puts("no");
    }

    return 0;
}






