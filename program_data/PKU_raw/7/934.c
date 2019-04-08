

int main()
{
    char str1[257], str2[257], str3[257];
    
    gets(str1);
    gets(str2);
    gets(str3);
    
    int i;
    int j;
    int k;
    for(i=0;i<strlen(str1);i++)
    {
                               j=0;
                               k=i;
                               while(j<strlen(str2))
                               {
                                                    if(str2[j]!=str1[k])
                                                                        break;
                                                    else
                                                        j++;
                                                        k++;
                                                    }
                               if(j == strlen(str2))
                               {
                                   printf("%s",str3);
                                   break;
                                   }
                               else
                                   printf("%c", str1[i]);
    }
    if(i!=strlen(str1))
                       for(i=k;i<strlen(str1);i++)
                                                  printf("%c", str1[i]);    
    return 0;
}
