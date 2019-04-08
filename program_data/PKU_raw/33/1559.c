int main(){
    int n,i,m,e,p;
    scanf("%d",&n);
    char zfc[n][256];
    for(i=0;i<n;i++){
        scanf("%s",zfc[i]);
        p=strlen(zfc[i]);
        for(m=0;m<p;m++){
          if(zfc[i][m]=='A'){zfc[i][m]='T';}
     else if(zfc[i][m]=='C'){zfc[i][m]='G';}
     else if(zfc[i][m]=='G'){zfc[i][m]='C';}
     else if(zfc[i][m]=='T'){zfc[i][m]='A';}}
     
     printf("%s\n",zfc[i]);
     printf("\n");
    }
    
return 0;
}



