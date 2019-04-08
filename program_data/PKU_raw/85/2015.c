int main (){
    int n,k,z;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        k=0;
        char sz[21];
        scanf("%s",sz);
        z=strlen(sz);
        if((sz[0]<='z'&&sz[0]>='a')||(sz[0]<='Z'&&sz[0]>='A')||(sz[0]=='_')){
            k++;
            }
      else{k-=100;}
        for(int m=1;m<z;m++){
        if((sz[m]<='z'&&sz[m]>='a')||(sz[m]<='Z'&&sz[m]>='A')||(sz[m]>='0'&&sz[m]<='9')||(sz[m]=='_')){
            k++;
            }
      else{k-=100;}
        
         }
        
      if(k>0){printf("yes\n");}
      else{printf("no\n");}
   
    }
  
return 0;    
}
