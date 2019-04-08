int girl = -1;
char boy_symbol = 0;
int main()
{
    int Match(int boy);
    Match(0);
    return 0;
}
int Match(int boy)
{
	girl ++;
    char ch;
    ch = cin.get();
	if (boy_symbol == 0) boy_symbol = ch;
    if (ch != boy_symbol)
    {
        return girl;
    }
    else
    {
        int t = Match(boy + 1);
        cout << boy << " " << t << endl;
        if(boy != 0)
            return Match(t + 1);
    }
}
