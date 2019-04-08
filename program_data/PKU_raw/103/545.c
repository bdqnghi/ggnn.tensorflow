void count(char *string)
{   
    int i=0,j=0;
    while(string[i]!='\0')
        {while(*(string+i)==*(string+j))
        i++;
        printf("(%c,%d)",*(string+j),i-j);
        j=i;}
}
int main()
{
    char string[1001];
    gets(string);
    int i;
    for(i=0;string[i]!='\0';i++)
    if(string[i]>='a'&&string[i]<='z')
    string[i]=string[i]-'a'+'A';
    count(string);
    return 0;
}     
