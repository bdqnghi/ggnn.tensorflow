
int main()
{   char str1[1000];
    char str2[1000]="0";
    int a1;
    long num=0;
    int b1;

    int num1[1000]={0};
    char char1[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int i;
    for(i='0';i<='9';i++)
    {
        num1[i]=i-'0';

    }
    for(i='A';i<='Z';i++)
    {
        num1[i]=i-'A'+10;
    }
    for(i='a';i<='z';i++)
    {
        num1[i]=i-'a'+10;
    }


    scanf("%d%s%d",&a1,str1,&b1);

    for(i=0;str1[i]!='\0';i++)
    {
        num=num*a1+num1[str1[i]];

    }


    int l2=0;
    l2=(num==0)?1:0;
    while(num>0)
    {
        str2[l2]=char1[num%b1];
        num=num/b1;
        l2=l2+1;
    }
    for(i=l2-1;i>=0;i--)
    {
        cout<<str2[i];
    }

    return 0;
}
