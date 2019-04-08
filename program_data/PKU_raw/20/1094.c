void main()
{
    char str[1000][10],substr[1000][3],max,s[1000][100];
    int i=0,j,k,l,q,w,e;
    while(scanf("%s %s",str[i],substr[i])!=EOF)
    {
        max=str[i][0];
        for(j=1;j<=10;j++)
        {if(max<str[i][j])    max=str[i][j];}
        for(k=0;k<=10;k++)
        {
            if(str[i][k]==max)
            {
              for(l=0;l<=k;l++) {s[i][l]=str[i][l];}
              for(q=0;l<=k+strlen(substr[i]);l++,q++)  {s[i][l]=substr[i][q];}
              for(w=k+1;l<=strlen(substr[i])+strlen(str[i]);l++,w++)  {s[i][l]=str[i][w];}
              printf("%s\n",s[i]);
              break;
            }
        }
       i++;
    }
}