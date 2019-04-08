
int check(int m)
{
    if (m<=5 && m>=0) return 1;
    else return 0; 
}


int main()
{
    int m,n,i;
    char temp[10],a[6][10];
    for (i=1;i<=5;i++)
    {
        gets(a[i]);    
    }
    scanf("%d%d",&m,&n);
    if (check(m+1) && check(n+1))
    {
                 strcpy(temp,a[m+1]);
                 strcpy(a[m+1],a[n+1]);
                 strcpy(a[n+1],temp);
                 for (i=1;i<=5;i++)
                 puts(a[i]);
                
    }
    else printf("error");


    return 0;
} 