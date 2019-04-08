int main()
{
int n;
    scanf("%d",&n);
    char zfc[300];
int len;

    for(int i=0;i<n;i++){
    scanf("%s",zfc);
    
 
    
            len=strlen(zfc);
      for(int j=0;j<len;j++){
         if(zfc[j]=='A')
           zfc[j]='T';
          else if(zfc[j]=='T')
           zfc[j]='A';
         else if(zfc[j]=='G')
           zfc[j]='C';
         else if(zfc[j]=='C')
           zfc[j]='G';
}
          printf("%s\n",zfc);
     
}
     return 0;
}
