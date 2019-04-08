int dicide(char words[100])
{
    int j=0;
    int z=1;
    if (words[0]!='_'&&(words[0]<'A'||(words[0]>'Z'&&words[0]<'a')||words[0]>'z'))
       {
           z=0;
       }
    else
    {
        while (words[j]!='\0')
        {
            z=1;
            j++;
            if ((words[j]<'A'||(words[j]>'Z'&&words[j]<'a')||words[j]>'z')&&words[j]!='\n'&&words[j]!='\0'&&words[j]!='_'&&(words[j]<'0'||words[j]>'9'))
            {
                z=0;
                break;
            }
        }

    }
return (z);
}
int main()
{
    int time=0;
    cin >>time;
    cin.get();
    char a[100][100];
    int i=0;
    for (i=0;i<time;i++)
    {
        cin.getline(a[i],100);
        cout <<dicide(a[i])<<endl;
    }
return 0;
}
