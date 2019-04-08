int main()
{
    int n,b[100],i,r,j=0,k=0,o[100]={0},y[100]={0},l=1,m;
    char a[100][10],old[100][10],young[100][10],str[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {               scanf("%s %d",a[i],&b[i]);
                    if(b[i]>=60)
                    {
                                strcpy(old[j],a[i]);
                                o[j]=b[i];
                                j++;
                    }
                    else
                    {
                                strcpy(young[k],a[i]);
                                y[k]=b[i];
                                k++;
                    }
    }
    for(i=j-1;i>0;i--)
    {
                      for(r=0;r<i;r++)
                      {
                                      if(o[r]<o[r+1])
                                      {
                                                     m=o[r+1];
                                                     strcpy(str,old[r+1]);
                                                     o[r+1]=o[r];
                                                     strcpy(old[r+1],old[r]);
                                                     o[r]=m;
                                                     strcpy(old[r],str);
                                      }
                      }
    }
    for(i=0;i<j;i++)
    printf("%s\n",old[i]);
    for(i=0;i<n-j;i++)
    printf("%s\n",young[i]);
    getchar();
    getchar();
}
                                                     
    
