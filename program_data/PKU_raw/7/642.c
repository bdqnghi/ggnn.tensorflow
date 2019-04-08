int main()
{
   int i,n,k,m,j,tag=1,jieshu=1;
   char zfc[257],dth[257],bth[257],danci[257];
   int zhyw=0;
    gets(zfc);
	gets(dth);
	gets(bth);
    n=strlen(zfc);
    m=strlen(dth);
  for(i=0;i<n;i++) 
  {             
        if(zfc[i]==dth[0])
        {
             for(k=1;k<m;k++)
             {
               if(zfc[i+k]!=dth[k])
                   tag=0;
             } 
             if(tag)
             {
                printf("%s",bth);
                for(j=i+m;j<n;j++)
                  printf("%c",zfc[j]);
                jieshu=0;  
                  
             }
              tag=1; 
        }  
        if(jieshu)
        {
              printf("%c",zfc[i]);
              
        }
        if(jieshu==0)
         break;      
  }         
       
     return 0;
}                  
 
