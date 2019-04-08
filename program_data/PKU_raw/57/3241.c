int main(){
    char bz[100][500];
    int n,i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%s",bz[i]);
                     }
    for(i=0;i<n;i++){
                     l=strlen(bz[i]);
                     for(j=0;j<l;j++){
                                      if(bz[i][l-2]=='e'){bz[i][l-2]='\0';}
                                      else if(bz[i][l-2]=='l'){bz[i][l-2]='\0';}
                                      else if(bz[i][l-2]=='n'){bz[i][l-3]='\0';}
                                      }
                     if(i!=n-1){printf("%s\n",bz[i]);}
                     else{printf("%s",bz[i]);}
                     }
    return 0;
    }
