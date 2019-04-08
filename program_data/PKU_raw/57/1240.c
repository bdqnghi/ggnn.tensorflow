int main(){
    int n,a,b,c,d;
    char dc[50][32];
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%s",dc[a]);
    }
    for(b=0;b<n;b++){
        d=strlen(dc[b]);
               if(dc[b][d-2]=='e'&&dc[b][d-1]=='r'){
                   dc[b][d-2]='\0';
               }else
               if(dc[b][d-2]=='l'&&dc[b][d-1]=='y'){
                   dc[b][d-2]='\0';
               }else
               if(dc[b][d-3]=='i'&&dc[b][d-2]=='n'&&dc[b][d-1]=='g'){
                   dc[b][d-3]='\0';
               }
               printf("%s\n",dc[b]);
           }
           return 0;
}

