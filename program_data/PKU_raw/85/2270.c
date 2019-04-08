int main(){
    int n,b;
    scanf("%d",&n);
    char zfc[N][21];
    for(int i=0;i<n+1;i++){
        gets(zfc[i]);
    }
    b=strlen(zfc[0]);
    for(int k=0;k<n+1;k++){
        for(int m=0;m<b;m++){
            if(m==0){if((zfc[k][m]=='_')||(zfc[k][m]>='a'&&zfc[k][m]<='z')||(zfc[k][m]>='A'&&zfc[k][m]<='Z')){continue;}
            else {printf("no\n");break;}
            }
            if(m!=0&&m+1!=b){if((zfc[k][m]=='_')||(zfc[k][m]>='a'&&zfc[k][m]<='z')||(zfc[k][m]>='A'&&zfc[k][m]<='Z')||(zfc[k][m]>='0'&&zfc[k][m]<='9'))
            {continue;}else {printf("no\n");break;}
            }
            if(m+1==b){
                if((zfc[k][m]=='_')||(zfc[k][m]>='a'&&zfc[k][m]<='z')||(zfc[k][m]>='A'&&zfc[k][m]<='Z')||(zfc[k][m]>='0'&&zfc[k][m]<='9')){
                    printf("yes\n");
                }
                else{printf("no\n");}
            }
    }
    b=strlen(zfc[k+1]);
    }
    return 0;
}

