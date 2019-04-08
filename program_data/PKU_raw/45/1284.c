int main(){                 
   char a[100],b[100];                 
   int i,j,l,r,c=0;                 
   scanf ("%s",a);                 
   scanf ("%s",b);               
     l=strlen(a);               
     r=strlen(b);               
     for (i=0;i<r;i++)    {             
        for(j=0,c=0;j<l;j++) 
       {                      
          if(a[j]==b[i+j])          
                  c++;                
        }                     
    if (c==l)                   
     {printf("%d",i);                           break;               
          }               
     }         
           return 0;     
}                