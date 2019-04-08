int main()
{
    int intime,outtime;
    int time[1000]={0};
    int count=0;
    char a;
    int i;
    do 
    {
        cin >> intime;
        count++;
        for (i=intime;i<1000;i++)
        {
            time[i]++;
        }
        cin.get(a);
    }
    while (a!='\n');
    do 
    {
        cin >> outtime;
        
        for (i=outtime;i<1000;i++)
        {
            time[i]--;
        }
        cin.get(a);
    }
    while (a!='\n');
    int max=time[0];
    for (i=1;i<1000;i++)
    {
        if (time[i]>max)
        {
            max=time[i];
        }
    }
    cout << count << " " << max << endl;


    return 0;
}
