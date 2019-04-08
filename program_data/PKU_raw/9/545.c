int main()
{
    int n,i,j,temp;
    char t[10];
    scanf("%d",&n);
    int y[n];
    char id[n][10];
    for (i=0;i<n;i++)
        scanf("%s %d",id[i],&y[i]);
    for (i=1;i<n;i++)
    {
        if (y[i]>=60)
        {    for (j=i;j>0;j--)
             if (y[j-1]<y[j]) 
             {
                              temp=y[j];
                              y[j]=y[j-1];
                              y[j-1]=temp;
                              strcpy(t,id[j]);
                              strcpy(id[j],id[j-1]);
                              strcpy(id[j-1],t);
                              }
             }
        }
    for (i=0;i<n;i++)
    printf("%s\n",id[i]);
    }
