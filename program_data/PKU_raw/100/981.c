int main()
{
    int i,letter[26]={0},flag=0;
    char word[400]={'@'}, num[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%s",word);
    for(i=0;i<400;i++)
    {
                      if(word[i]=='a')
                      letter[0]++;
                      else if(word[i]=='b')
                      letter[1]++;
                      else if(word[i]=='c')
                      letter[2]++;
                      else if(word[i]=='d')
                      letter[3]++;
                      else if(word[i]=='e')
                      letter[4]++;
                      else if(word[i]=='f')
                      letter[5]++;
                      else if(word[i]=='g')
                      letter[6]++;
                      else if(word[i]=='h')
                      letter[7]++;
                      else if(word[i]=='i')
                      letter[8]++;
                      else if(word[i]=='j')
                      letter[9]++;
                      else if(word[i]=='k')
                      letter[10]++;
                      else if(word[i]=='l')
                      letter[11]++;
                      else if(word[i]=='m')
                      letter[12]++;
                      else if(word[i]=='n')
                      letter[13]++;
                      else if(word[i]=='o')
                      letter[14]++;
                      else if(word[i]=='p')
                      letter[15]++;
                      else if(word[i]=='q')
                      letter[16]++;
                      else if(word[i]=='r')
                      letter[17]++;
                      else if(word[i]=='s')
                      letter[18]++;
                      else if(word[i]=='t')
                      letter[19]++;
                      else if(word[i]=='u')
                      letter[20]++;
                      else if(word[i]=='v')
                      letter[21]++;
                      else if(word[i]=='w')
                      letter[22]++;
                      else if(word[i]=='x')
                      letter[23]++;
                      else if(word[i]=='y')
                      letter[24]++;
                      else if(word[i]=='z')
                      letter[25]++;
    }
    for(i=0;i<26;i++)
        {
                         if(letter[i]!=0)
                         {
                                         printf("%c=%d\n", num[i],letter[i]);
                                         flag=1;
                         }     
        }
    if(flag==0)
    printf("No");
    scanf("%d",&flag);
    return 0;
}
