
int main()
{
    char a[100][21];
    int n=0,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%s",a[i]);
    }
   for(i=0;i<n;i++)
   {
        if((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]=='_'))
        {

            for(j=1;;j++)
            {
                 if(a[i][j]=='\0')
                 {
                    printf("yes\n");
                    break;
                 }

                 if(!((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0')&&(a[i][j]<='9'||a[i][j]=='_')))
                 {
                 printf("no\n");
                 break;
                 }
            }
        }
        else
        {printf("no\n");}

   }






    return 0;
}
