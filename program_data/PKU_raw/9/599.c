int main()
{
    char a[100][1000];
    int b[100];
    char c[100][1000];
    int q,w,e;
    q=0;
    w=0;
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     int y;
                     char x[100][1000];
                     scanf("%s %d",x,&y);
                     if(y>=60)
                     {
                              strcpy(a[q],x[0]);
                              b[q]=y;
                              q++;
                     }
                     else
                     {
                              strcpy(c[w],x[0]);
                              w++;
                     }
    }
    int h;
    char H[100][1000];
    for(i=1;i<10000;i++)
    {
          for(j=0;j<q;j++)
          {
                            if(b[j]<b[j+1])
                            {
                                     h=b[j];
                                     b[j]=b[j+1];
                                     b[j+1]=h;
                                     strcpy(H[0],a[j]);
                                     strcpy(a[j],a[j+1]);
                                     strcpy(a[j+1],H[0]);      
                            }
          }               
    }
    for(i=0;i<q;i++)
    {
                      
                      printf("%s\n",a[i]);
                      
    }
    for(i=0;i<w;i++)
    printf("%s\n",c[i]);
}