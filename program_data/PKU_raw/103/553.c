main()
{
int i=0,j=0,k=0;
int s[26];      

char out[1001];
scanf("%s",out);
for(k=0;k<strlen(out);)
{
    if(out[k]<='z' && out[k]>='a')
    {out[k]=out[k]-'a'+'A';}
    k++;
    }

for(i=0;i<strlen(out);i++)
   { while(out[i]==out[i+1])
     {j++;
     i++;}                  
      
    printf("(%c,%d)",out[i],j+1);
    j=0;
    
      }
            }
