int main()
{
    char string[200];
    int n,i,p,x[100],y[100],q,j,t,m;
    gets(string);
    n=strlen(string);
    char c1;
    char c2;
    c1=string[0];
    for(i=1;i<n;i++)
    {
                    if(string[i]!=c1)
                    {
                                       c2=string[i];
                                       break;
                    }
    }
   
    p=1;
    q=1;
    for(p=1;p<n;p=p+2)
    {
                    for(i=0;i<n;i++)
                    {
                    
                              if(string[i]==c1&&string[i+p]==c2)
                              {
                              
                              string[i]='a';
                              string[i+p]='a';
                              x[q]=i;
                              y[q]=i+p;
                              q++;
                              }
                    }   
    }
    
    
    
    
    for(q=1;q<=n/2;q++)
    {
                       for(j=1;j<=n/2-q;j++)
                       {
                                            if(y[j]>y[j+1])
                                            {
                                                           t=y[j];
                                                           y[j]=y[j+1];
                                                           y[j+1]=t;
                                                           m=x[j];
                                                           x[j]=x[j+1];
                                                           x[j+1]=m;
                                            }
                       }
    }
                                                           
    for(q=1;q<=n/2;q++)
    {
                       printf("%d %d\n", x[q], y[q]);
    }
    
    return 0;
}