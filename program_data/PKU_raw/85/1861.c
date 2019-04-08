int main()
{
    char s[100];
    int i,n,l=0,j,k=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
     scanf("%s",s);
        l=strlen(s);
      
        
        if(((s[0]>='A')&&(s[0]<='Z'))||((s[0]>='a')&&(s[0]<='z'))||(s[0]=='_') )
           {for (j=1;j<l;j++)
              if (((s[j]>='A')&&(s[j]<='Z'))||((s[j]>='a')&&(s[j]<='z'))||(s[j]=='_')||((s[j]>='0')&&(s[j]<='9')))
                k++;
              else
                {puts("no"); k=0;break;}
                
              if (k+1==l) {puts("yes");k=0;}} 
          
                  else
                    {puts("no");k=0;}
    }
                    
         return 0;   
        
}

