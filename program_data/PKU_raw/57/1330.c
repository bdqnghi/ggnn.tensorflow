int main(){
    int n;
    int p;
    scanf("%d\n",&n);
    char zfc[50];
    for(int i=0;i<n;i++){
        scanf("%s\n",zfc);
        p=strlen(zfc);
        for(int j=0;zfc[j];j++){
            if(zfc[p-2]=='l'&&zfc[p-1]=='y'){
                zfc[p-2]='\0';
            }
            else if(zfc[p-2]=='e'&&zfc[p-1]=='r'){
                zfc[p-2]='\0';
            }
            else if(zfc[p-3]=='i'&&zfc[p-2]=='n'&&zfc[p-1]=='g'){
                zfc[p-3]='\0';
            }
        }
        printf("%s\n",zfc);
    }
    return 0;
}


