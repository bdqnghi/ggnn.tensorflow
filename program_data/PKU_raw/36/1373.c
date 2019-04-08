int main()
{
    char a[10000],b[10000];
    scanf("%s",a);
    scanf("%s",b);
    int length1,length2,i,j,t=0;
    length1=strlen(a);
    length2=strlen(b);
    if(length1!=length2) printf("NO\n");
    else
    {
        int aa[10000],bb[10000];
        for(i=0;i<length1;i++)
        {
               aa[i]=1;
               bb[i]=1;
        }
        for(i=0;i<length1;i++)
        {
               for(j=0;j<length1;j++)
               {
                      if(a[i]==b[j]&&bb[j]==1) 
                      {
                                               bb[j]=0;
                                               break;
                      }
               }
        }
        for(j=0;j<length1;j++)
        {
              if(bb[j]==0) t++;
        }
        if(t==length1) printf("YES\n");
        else printf("NO\n");
    }
               
    getchar();
    getchar();
    getchar();
}
    
