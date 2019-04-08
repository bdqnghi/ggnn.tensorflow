int a;
char s1[101],s2[101];
int main()
{
    int n,l,i,j;
    scanf("%d",&n);
    for(l=0;l<n;l++)
    {
         memset(s1,0,101);
         memset(s2,0,101);
         scanf("%s",s1);
         a=strlen(s1);
         int k[100]={0},b=0;
         for(i=0;i<a;i++)
         {
              if(s1[i]=='('){
              for(j=i;j<a;j++)
              {
                  if(s1[j]=='(') k[i]++;
                  else if(s1[j]==')')  k[i]--;
              }     }   
         }
         for(i=a-1;i>=0;i--)
         {
              if(s1[i]==')'){
              for(j=i;j>=0;j--)
              {
                  if(s1[j]==')') k[i]++;
                  else if(s1[j]=='(')  k[i]--;
              }       } 
         }
         for(i=0;i<a;i++)
         {
            if(s1[i]==')')
            {
                 b=0;
                 for(j=i-1;j>=0;j--) if(s1[j]==')' && k[j]>0) b++;
                 k[i] -=b;
             }
         }
         for(i=a-1;i>=0;i--)
         {
             if(s1[i]=='(')
             {
                  b=0;
                  for(j=i+1;j<a;j++) if(s1[j]=='(' && k[j]>0) b++;
                  k[i] -=b;
             }              
         }
         for(i=0;i<a;i++) 
         {
             if(k[i]>0) {if(s1[i]=='(') s2[i]='$';else if(s1[i]==')') s2[i]='?';}
             else s2[i]=' ';
         }
         printf("%s\n",s1);
         for(i=0;i<a;i++) printf("%c",s2[i]);     
         printf("\n");  
    }
    }
