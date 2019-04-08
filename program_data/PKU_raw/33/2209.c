int main(){
    int n,i,j;
    char zfc[1000][1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",zfc[i]);  
for(i=0;i<n;i++){
for(j=0;j<strlen(zfc[i]);j++){
            if(zfc[i][j]=='A'){
                printf("T");
            }
            else if(zfc[i][j]=='T'){
                printf("A");
            }
            else if(zfc[i][j]=='G'){
                printf("C");
            }           
            else if(zfc[i][j]=='C'){
                printf("G");
            }

        }
printf("\n");        

    }
    return 0;
}


