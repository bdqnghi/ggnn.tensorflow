int main(){
    int n,l,i,j,k;
    scanf("%d",&n);
    char zfc[101];
    for(i=0;i<n-1;i++){
        k=0;
        scanf("%s",zfc);
        l=strlen(zfc);
        if(zfc[0]=='_'||(zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')){
            for(j=1;j<l;j++){
                if(zfc[j]=='_'||(zfc[j]>='a'&&zfc[j]<='z')||(zfc[j]>='A'&&zfc[j]<='Z')||(zfc[j]>='0'&&zfc[j]<='9')){k++;}
            }
        }
        if(k==l-1){printf("yes\n");}
        else{printf("no\n");}
    }
        k=0;
        scanf("%s",zfc);
        l=strlen(zfc);
        if(zfc[0]=='_'||(zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')){
            for(j=1;j<l;j++){
                if(zfc[j]=='_'||(zfc[j]>='a'&&zfc[j]<='z')||(zfc[j]>='A'&&zfc[j]<='Z')||(zfc[j]>='0'&&zfc[j]<='9')){k++;}
            }
        }
        if(k==l-1){printf("yes");}
        else{printf("no");}
    return 0;
}