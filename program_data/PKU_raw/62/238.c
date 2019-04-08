//  ???????


int main()
{
    char str[50];
    cin.getline(str,50);
    for (int i=1;i<50;i++)
    {
        if (str[i]==' ')
        {
            while (str[i+1]==' ')
            {
                for (int j=i+1;j<50;j++)
                    str[j]=str[j+1];
            }
        }
    }
    cout<<str;
    return 0;
}