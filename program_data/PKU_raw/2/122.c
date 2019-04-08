int main()
{
    int num,i,j;
    char a='A';
    int count[27]={0};
    int *p=&count[1];
    scanf("%d",&num);
    struct book
    {
           char order[4];
           char author[26];
    }book[1000];
    for(i=0;i<num;i++)
    {
                      scanf("%s",book[i].order);
                      scanf("%s",book[i].author);
    }
    for(i=0;i<num;i++)
    {
                      int m=strlen(book[i].author);
                      for(j=0;j<m;j++)
                      {
                                      if(book[i].author[j]=='A')count[1]++;
                                      if(book[i].author[j]=='B')count[2]++;
                                      if(book[i].author[j]=='C')count[3]++;
                                      if(book[i].author[j]=='D')count[4]++;
                                      if(book[i].author[j]=='E')count[5]++;
                                      if(book[i].author[j]=='F')count[6]++;
                                      if(book[i].author[j]=='G')count[7]++;
                                      if(book[i].author[j]=='H')count[8]++;
                                      if(book[i].author[j]=='I')count[9]++;
                                      if(book[i].author[j]=='J')count[10]++;
                                      if(book[i].author[j]=='K')count[11]++;
                                      if(book[i].author[j]=='L')count[12]++;
                                      if(book[i].author[j]=='M')count[13]++;
                                      if(book[i].author[j]=='N')count[14]++;
                                      if(book[i].author[j]=='O')count[15]++;
                                      if(book[i].author[j]=='P')count[16]++;
                                      if(book[i].author[j]=='Q')count[17]++;
                                      if(book[i].author[j]=='R')count[18]++;
                                      if(book[i].author[j]=='S')count[19]++;
                                      if(book[i].author[j]=='T')count[20]++;
                                      if(book[i].author[j]=='U')count[21]++;
                                      if(book[i].author[j]=='V')count[22]++;
                                      if(book[i].author[j]=='W')count[23]++;
                                      if(book[i].author[j]=='X')count[24]++;
                                      if(book[i].author[j]=='Y')count[25]++;
                                      if(book[i].author[j]=='Z')count[26]++;
                      }
    }
    for(i=1;i<27;i++)
    {
                     if(count[i]>*p)
                     {
                                         p=&count[i];
                                         a=i+64;
                     }
    }
    printf("%c\n%d\n",a,*p);
    for(i=0;i<num;i++)
    {
                      for(j=0;j<strlen(book[i].author);j++)
                      {
                                                           if(book[i].author[j]==a)
                                                           printf("%s\n",book[i].order);
                      }
    }
   
    return 0;
}
