int main()

{  int n,i,j=0,j2,k=0,a[500],c[500];
  scanf("%d",&n);
  int t=n; 
  char v[503],b[503][30];
  scanf("%s",v);
  for(int i=0;i<=strlen(v)-1;i++)
   { 
          
     b[k][j]=v[i];
     j++;
     if((j==n)&&(i!=strlen(v)-1)) 
      { 
        j=0;     
        i=i-n+1;     
        k++; 
      }
      else if((j==n)&&(i==strlen(v)-1))
       {break;}      
   }    
 for(int i=0;i<=strlen(v)-n;i++)
  { 
      a[i]=0;
      int l=0; 
     for(int j=0;j<=strlen(v)-n;j++)
       {  
         for(int p=0;p<=n-1;p++)
           {
            if(b[i][p]==b[j][p])
             {
               l++;                 
             }
           }  
         if(l==n){a[i]++;l=0;}
         else{l=0;}    
       }      
  }    
 for(int i=0;i<=strlen(v)-n;i++)
    {
       c[i]=a[i];   
    }
 int e=0;
 for(int i=0;i<=strlen(v)-n;i++)
 {
    if(a[i]==1){e++;}
  }
  if(e==strlen(v)-n+1){printf("NO");}
 else {
      
      e=c[0];
  for(int i=0;i<=strlen(v)-n;i++)           
 {
    if(c[i]>e)
      { 
         e=c[i];          
      }
         
  }
  
  printf("%d\n",e);
  int m[500],z=0,o=0,pa=1; 
 for(int i=0;i<=strlen(v)-n;i++)
  { 
    if(a[i]==e)
    {m[z]=i;z++;}      
  }
for(int i=0;i<=z-1;i++)
 { pa=1;
   if(i!=0)
     {
       for(int r=i-1;r>=0;r--)
        { 
              
      if(strcmp(b[m[i]],b[m[r]])==0){
                                     pa=0;
                                     break;
                                     }
      }
      }
   if(pa!=0)
   {
     for(int j2=0;j2<=n-1;j2++)     
     {
      printf("%c",b[m[i]][j2]);
     }
      { printf("\n");}
   }
 }
} 
 int y;scanf("%d",&y);
 return 0;
} 