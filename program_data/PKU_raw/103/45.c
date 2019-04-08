int main()
{
    char string[1000];
    gets(string);
    int l,i,j,count;
    l=strlen(string);
    for(i=0;i<l;i++)
    {      
           if(string[i]<'A'||string[i]>'Z')
           string[i]=string[i]-'a'+'A';
    }
    for(i=0;i<l;i++)
    {
                    count=0;
                    for(j=i;j<l;j++)
                    {
                                    if(string[i]==string[j])
                                    count++;
                                    else
                                    break;
                    }
                    if(count!=0)
                    {
                    printf("(%c,%d)",string[i],count);
                    i=i+count-1;
                    }
    }
    getchar();
    getchar();
}  