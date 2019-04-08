int main()
{
char a[500];
int b[500]={0}; 
int n,i,j,k,len,q=0,time=0,max; 
scanf("%d",&n);   
scanf("%s",a);
len=strlen(a);

 for(j=0;j<len-n+1;j++)
      {       
          for(i=0;i<=j;i++)                                                     
             { 
                
                for(k=0;k<n;k++)
               {   
                 if(a[j+k]==a[i+k])
                 q++;
                 else { q=0;break; }                            
               }
              if(q==n)
              {b[i]++;q=0;break;}
              else
              q=0; 
              
            }     
                  
     } 
//for(i=0;i<len-n+1;i++)
//printf("%d",b[i]);


max=b[0];
for(i=1;i<len-n+1;i++)
{
  if(b[i]>max)
  max=b[i];
  else;   
}


if(max==1) 
printf("NO");
else
{   
    printf("%d\n",max);
    for(i=0;i<len-n+1;i++)
    {
     if(max==b[i])
     for(k=0;k<n;k++)
         {    
             printf("%c",a[i+k]);
         }    
     printf("\n");
    }
}    
return 0;              
}
 