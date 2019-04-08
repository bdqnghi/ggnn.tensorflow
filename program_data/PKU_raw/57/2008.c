int main()
{
int i,j,n,e;



char sz[50][33];
scanf("%d",&n);
for(i=0;i<n;i++)
    {
      scanf("%s",sz[i]);
    }
for(j=0;j<n;j++){
for(i=0;i<n;i++)
    {
      e=strlen(sz[i]);
             if(sz[i][e-1]=='y'||sz[i][e-1]=='r')
              {
             sz[i][e-2]='\0'; 
             break;
               }
         if(sz[i][e-1]=='g')
              {
             sz[i][e-3]='\0';
              break;
               }
  
    }
 printf("%s\n",sz[j]);    
}

return 0;
    
    
}

