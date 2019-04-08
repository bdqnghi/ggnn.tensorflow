

int main()
{
    int w, m = 1, day, a;
    cin >> w;
    day = 12;
    do
    {
        if(m == 3)
            day += 28;
        else
        {
           if(m == 5 || m == 7 || m == 10 || m == 12)
              day += 30;
           else
              if(m != 1)
              day += 31;
        }
        a = day % 7;
        if((a + w) % 7 == 5)
            cout << m << endl;
        m++;
    }while(m <= 12);
    return 0;
}
