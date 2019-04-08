int arr(char a[100],char b[100])
{
    int i,n,m,count1[128]={0},count2[128]={0};
    n=strlen(a);
    m=strlen(b);
    if(n!=m) return 0;
    else
        for(i=0;i<n;i++)
        {
            count1[a[i]]++;
            count2[b[i]]++;
        }
    for(i=0;i<128;i++)
   {
    if(count1[i]!=count2[i])
    {return 0;
    break;
    }
   }
    return 1;
}
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    if(arr(a,b)==0) printf("NO");
    if(arr(a,b)==1) printf("YES");
    return 0;
}
