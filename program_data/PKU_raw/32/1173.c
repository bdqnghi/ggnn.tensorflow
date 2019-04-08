int leap(int *p,int n)
{                                                                                
    if(n==0) return -1;                                                          
    if((*p)!=0) return 0;
    else return leap(p+1,n-1)+1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    char a[100],b[100];
                    int j,k=0,f=0,c[100]={0};
                    scanf("%s %s",a,b);
                    int len1=strlen(a),len2=strlen(b);
                    if(len1<len2) f=-1;
                    else if(len1==len2)
                         for(j=0;j<len1;j++)
                              if(a[j]<b[j]) 
                              {
                                           f=-1;
                                           break;
                              }
                    if(f==-1)
                    {
                             printf("-");
                             char s[100];
                             strcpy(s,a);
                             strcpy(a,b);
                             strcpy(b,s);
                             int len=len1;
                             len1=len2;
                             len2=len;
                    }                        
                    for(j=len2-1;j>=0;j--)
                                          b[j+len1-len2]=b[j];
                    for(j=len1-len2-1;j>=0;j--)
                                               b[j]='0';
                    for(j=len1-1;j>=0;j--)
                    {
                                          c[j]=a[j]-b[j]-k;
                                          if(c[j]<0)
                                          {
                                                    c[j]+=10;
                                                    k=1;
                                          }
                                          else k=0;
                    }
                    j=leap(c,len1);
                    if(j==-1) printf("0");
                    else
                        for( ;j<len1;j++)
                                         printf("%d",c[j]);
                    printf("\n");
    }
    return 0; 
}