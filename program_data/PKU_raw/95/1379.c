

int main()
{   char char1[100];
    char char2[100];
    cin.getline(char1,100);
    cin.getline(char2,100);
    int i;
    int m=0;
    int l1,l2;
    l1=strlen(char1);
    l2=strlen(char2);
    if(l1<l2);
    l1=l2;
    for(i=0;i<=l1;i++)
    {
        if(char1[i]>96)
            char1[i]=char1[i]-32;
        if(char2[i]>96)
            char2[i]=char2[i]-32;
    }
    for(i=0;i<=l1;i++)
    {
        if((char1[i]>char2[i])&&((char1[i]-char2[i])!=32))
        {
            cout<<">";
            m=1;
            break;
        }
        if((char1[i]<char2[i])&&((char2[i]-char1[i])!=32))
        {
            cout<<"<";
            m=1;
            break;
        }


    }
    if(m==0)
    cout<<"=";

    return 0;
}
