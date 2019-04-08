int main(){
    char zfc[100][21];
    int n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%s",zfc[i]);
    }
    for(i=0;i<n;i++)
    {if((zfc[i][0]>='A'&&zfc[i][0]<='Z')||zfc[i][0]>='a'&&zfc[i][0]<='z'||zfc[i][0]=='_')
    {   int m=strlen(zfc[i]),c=0;
        for(k=1;k<m;k++)
        {
        if((zfc[i][k]>='0'&&zfc[i][k]<='9')||(zfc[i][k]>='A'&&zfc[i][k]<='Z')||(zfc[i][k]>='a'&&zfc[i][k]<='z')||zfc[i][k]=='_')
        {
            c++;
        }
    
        }if(c==(m-1)){
            printf("yes\n");
        }else{printf("no\n");}
    }else{
        printf("no\n");      
         }
    }
      return 0;  
    
}
