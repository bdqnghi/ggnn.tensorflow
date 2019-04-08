int main()
{ char str[1001];
int num [27],flag,i,j; 
scanf("%s",str);

for(j=0;j<=27;j++)
{num[j]=1;} 
for (i=0;i<=strlen(str);i++)
{   if (str[i] >= 'a' &&  str[i] <='z')
 str[i]=str[i]-'a'+'A'; 
    } 

for (i=1;i<=strlen(str);i++)
{   
    if (str[i]==str[i-1])
    {num[str[i]-'A']++;
}
    else
    {
    
    printf ("(%c,%d)",str[i-1],num[str[i-1]-'A']);
    num[str[i-1]-'A']=1; 
 
     } 
     
     
    
    
    
} 
        

             
             
            
          
   
   
   
   
   
   
   
   
   
   
   

   
    return 0;
}


