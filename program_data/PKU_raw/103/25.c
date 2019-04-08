int main()
{
    char a[1000];
    int count=1,i;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
                            if((a[i]==a[i+1])||(a[i]-a[i+1]=='a'-'A')||(a[i+1]-a[i]=='a'-'A'))
                            {
                                            count++;
                            }
                            else
                            {
                                if(a[i]>='a')
                                {
                                             a[i]=a[i]-'a'+'A';
                                             printf("(%c,%d)",a[i],count);
                                             count=1;
                                }
                                else
                                {
                                    printf("(%c,%d)",a[i],count);
                                    count=1;
                                }
                            }
    }
    getchar();
    getchar();
}
              