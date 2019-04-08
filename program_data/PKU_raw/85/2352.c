int main()
{
    int n,i,k;
    scanf("%d",&n);
    char zfc[MAX+1];
    getchar();
    for(i=0;i<n;i++)
    {
    gets(zfc);
        for(k=0;zfc[k];k++)
        {
        if(!((zfc[k]=='_')||(zfc[k]>='A'&&zfc[k]<='Z')||(zfc[k]>='0'&&zfc[k]<='9'&&k>0)||(zfc[k]<='z'&&zfc[k]>='a')))
        break;
        }
         if(zfc[k]||zfc[k]>='0'&&zfc[0]<='9')
         printf("no\n");
         else
         printf("yes\n");
     }
     return 0;
}
