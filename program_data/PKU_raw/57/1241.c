 int main()
 {
     int n,l,i;
     char sz[99][99];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%s",sz[i]);
     for(i=0;i<n;i++){
         l=strlen(sz[i]);
         if(sz[i][l-1]=='r'||sz[i][l-1]=='y')
         sz[i][l-2]='\0';
         else if(sz[i][l-1]=='g')
         sz[i][l-3]='\0';
     }
      for(i=0;i<n-1;i++)
      printf("%s\n",sz[i]);
      printf("%s",sz[n-1]);
      return 0;
     
 }
