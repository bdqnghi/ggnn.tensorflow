int main()
{
    char a[110],b[100][1000];
    int n,i,y,l,j,p=0,q=0,c[1000],d[1000],e[1000],m,s,g[1000],v[1000];
        scanf("%d",&n);
               for(i=1;i<=n;i++)
                           {   
                               scanf("%s %d",a,&y);
                               l=strlen(a);
                               for(j=0;j<l;j++)
                                  {b[i-1][j]=a[j];} //??ID 
                                  b[i-1][l]='\0';
                                  c[i-1]=y;//???? 
                           }  
              for(i=0;i<n;i++)//???? 
              {
              if(c[i]>=60)     
                 {
                 d[p]=c[i];
                 g[p]=i;
                 p++;           
                 }
              else if(c[i]<60)
                 {
                 e[q]=c[i];
                 v[q]=i;
                 q++;
                 }
              }
                              for(j=0;j<=p-1;j++)
                                  {               
                                  for(i=0;i<=p-1;i++)
                                          {
                                          if(d[i]>m)
                                            { m=d[i];
                                             s=i;
                                             }
                                          else if(d[i]<=m);
                                          }
                                     printf("%s\n",b[g[s]]);         
                                     m=0; 
                                     d[s]=0;
                                  }      
                            for(i=0;i<=q-1;i++)
                                  printf("%s\n",b[v[i]]);            
                                     
    
    
    
     
}