int main()
{   
    int n,i,j,l,b;
    int s[10000];
    scanf("%d",&n);
    scanf("%d %d",&i,&j);
    b=0;
    for (l=0;l<n;l++)
        s[l]=0;
    while ((i!=0)||(j!=0))
          {
                         s[j]++;
                         if (s[j]==n-1)
                         {
                            printf("%d\n",j);
                            b++;
                         }
          scanf("%d %d",&i,&j);
          }
    if (b==0)
       printf("NOT FOUND");
}
            