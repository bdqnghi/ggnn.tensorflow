int main()
{
   int n;
   scanf("%d",&n);
   char zfc[256];
   for(int i=0;i<=n;i++){
          gets(zfc);
          for(int j=0;j<strlen(zfc);j++){
                  if(j==strlen(zfc)-1){
                  if(zfc[j]=='A'){
                  printf("T\n"); 
                                  }
                                    if(zfc[j]=='T'){
                  printf("A\n"); 
                                  }
                                                    if(zfc[j]=='G'){
                  printf("C\n"); 
                                  }
                                                    if(zfc[j]=='C'){
                  printf("G\n"); 
                                  }
                                      }
                                         if(j!=strlen(zfc)-1){
                  if(zfc[j]=='A'){
                  printf("T");
                                  }
                                    if(zfc[j]=='T'){
                  printf("A"); 
                                  }
                                                    if(zfc[j]=='G'){
                  printf("C"); 
                                  }
                                                    if(zfc[j]=='C'){
                  printf("G"); 
                                  }
                                      }
                  
                  }
                  }           
                                      
   int hou;
   scanf("%d",&hou);
    return 0;
}
