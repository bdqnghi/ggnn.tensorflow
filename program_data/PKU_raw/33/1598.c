int main ()
{
    char zs[257];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",zs);
        for(j=0;zs[j]!='\0';j++)
        {
            if(zs[j]=='A')
            {
                zs[j]='T';
            }
            else
            {
              if(zs[j]=='T')
              {
                  zs[j]='A';
              }
              else
              {
                  if(zs[j]=='C')
                  {
                      zs[j]='G';
                  }
                  else
                  {
                      if(zs[j]=='G')
                      {
                          zs[j]='C';
                      }
                  }
              }
            }
        }
     printf("%s\n",zs); 
    }
    


    return 0;
}
