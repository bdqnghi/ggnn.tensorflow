
void main() 
{
    char str[14],substr[4];
    int i,n,k=0;
    while(scanf("%s%s",str,substr)!=EOF)
    {n=strlen(str);
    for(i=0;i<n;i++)
    if(str[i]>str[k]) k=i;
    for(i=n;i>k;i--)
    str[i+3]=str[i]; 
    for(i=1;i<4;i++)
    str[k+i]=substr[i-1];
    puts(str);}
}