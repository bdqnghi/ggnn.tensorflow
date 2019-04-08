
void com(char str[10000]);
int main()
{
    int t,i;
    char a[200][10000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%s",&a[i]);
    com(a[i]);
    printf("\n");
    }
}
void com(char str[])
{
 int k,i,j,f=0,flag;
 k=strlen(str)-1;

 for(i=0;i<k;i++)
 {
     if( str[i]=='0')
     continue;
     else
     {
         flag=1;
     for(j=i+1;j<=k;j++)
        {
            if (str[i]==str[j])
        {
            str[j]='0';
            flag=0;
        }
       }
     }
        if (flag==1)
        {
          f=1;
          printf("%c",str[i]);
          break;
              }
 }
        if( f!=1)
        {
        if (str[k]!='0')
        printf("%c\n",str[k]);
        else
        printf("no\n");
        }
 }
