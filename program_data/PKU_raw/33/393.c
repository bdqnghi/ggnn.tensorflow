int main(){
    int n,i,j,k;
    char c1[260],c2[260];
    scanf("%d",&n);
    for(j=0;j<n;j++){
          scanf("%s",c1);
          k=0;                    
          for(i=0;c1[i]!='\0';i++){
                 if(c1[i]=='A') c2[i]='T';
                 if(c1[i]=='T') c2[i]='A';  
                 if(c1[i]=='C') c2[i]='G';
                 if(c1[i]=='G') c2[i]='C';
                 k++;
          }
          for(i=0;i<k-1;i++) printf("%c",c2[i]);
          printf("%c\n",c2[k-1]);
          
    }                                   
    
    return 0;
}           