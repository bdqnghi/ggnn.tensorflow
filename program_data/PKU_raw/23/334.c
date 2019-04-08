//dancidaopai
int main()
{
    char shuru[400];
    char word[20][20];
    cin.getline(shuru,400);
          int i=0,j=0,k=0,flag=0;
          for (i=0;shuru[i]!='\0';i++)
          {
              if (shuru[i]!=' ')
              {
                  word[j][k]=shuru[i];
                  k=k+1;
                  flag=0;
              }
              else if ((shuru[i]==' ')&&(flag==0))
              {
                   word[j][k]=0;
                   k=0;j=j+1;flag=flag+1;
              }
              else 
                    flag=flag+1;
          }
          word[j][k]=0;
          for(k=j;k>0;k--)
          {
                          if (word[k]!='\0')
                          cout<<word[k]<<" ";
          }
          cout<<word[0];
          return 0;
    }
