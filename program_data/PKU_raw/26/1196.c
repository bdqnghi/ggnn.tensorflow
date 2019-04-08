int main(){
    char zfc[255],sc[255];
    int i,j=0,s=0;
    gets(zfc);
    for(i=0;zfc[i]!='\0';i++){
        if(zfc[i]!=' '||(zfc[i]==' '&&zfc[i-1]!=' ')){
            sc[j]=zfc[i];
            j++;
            s++;
        }
    }
    sc[s]='\0';
    puts(sc);
    return 0;
}

