int main()
{
    int l,i,k=0,p[320]={0},q[320]={0};
    char  s[9999],t[9999];
    gets(s);
    l=strlen(s);
    for(i=1;i<l+1;i++)
       {
          t[i]=s[i-1];             
       }
    t[0]=' ';
    t[l+1]=' ';   
    for(i=1;i<l+1;i++)
       {   
           if(t[i]!=' '&&t[i-1]==' ')
             {
                p[k]=i-1;
                k++;
             }            
       }
       k=0;
     for(i=1;i<l+2;i++)
       {
          if(t[i]!=' '&&t[i+1]==' ')
             {
                 q[k]=i;
                 k++;        
             }                
       }  
     for(i=0;i<k-1;i++)
       {
          printf("%d,",q[i]-p[i]);            
       }
     printf("%d\n",q[k-1]-p[k-1]);      
    return 0;    
}

