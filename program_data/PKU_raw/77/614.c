char line[1000];
int search(int a)
{
    int i, j, flag=0;
    for (i=a-1;i>=0;i--)
    {
        if ((line[i]+line[a]==line[strlen(line)-1]+line[0])&&(flag==0))
        {
            for (j=a-1;j>=0;j--)
            {
                if (line[j]==line[strlen(line)-1])
                {
                    search (j);
                    break;
                }
            }
            if (j==0)
            return 0;
            cout << i << " " << a << endl;
            break;
        }
        if (line[i]+line[a]!=line[strlen(line)-1]+line[0])
        flag++; 
        if ((line[i]+line[a]==line[strlen(line)-1]+line[0])&&(flag!=0))
        flag--;
    }
}
int main()
{
    memset(line, 0, sizeof(line));
    cin >> line;
    search (strlen(line)-1);
    return 0;
}
