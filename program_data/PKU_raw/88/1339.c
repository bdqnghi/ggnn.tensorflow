//leave out and get the integers in a string
int a[30];
char str[31];
char *pt=str;
int getint()
{
    if(*pt=='\0')return -1;
    int sum=0;
    while ('0'<=*pt&&'9'>=*pt){//the egg pain segmentation fault!
        sum*=10;
        sum=sum+*pt-'0';
        pt++;}
    return sum;
}
void skipstring()
{
    while(*pt&&(*pt<'0'||*pt>'9'))
        pt++;
}
int main()
{
    gets(str);
    int i=0;
    for (i=0;i<30;i++)
        a[i]=-1;//means initialized
    i=0;
    while(*pt!='\0')
    {
        skipstring();
        a[i]=getint();
        i++;
    }
    for(i=0;i<30;i++)
        if(a[i]!=-1)printf("%d\n",a[i]);
    return 0;
}
