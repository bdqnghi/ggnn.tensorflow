char a[1000], girl, boy;//??????
int work(int l, int r)//??work??
{
    if (a[l] != a[l+1])
    {
        cout << l << ' ' << l+1 << endl;
        return 0;
    }
    int p,s,q;
    q = l+1;
    p = l+2;
    s = 1;
    while (p<r)   //????????????????????
    {
        while (s!= 0)
        {
            if (a[p] == boy) s++;
            if (a[p] == girl) s--;
            p++;
        }
        work(q,p-1);   //?????????
        s = 1;        //??cnt,??tmp???????????
        q = p;
        p++;
    }
    cout << l << ' ' << r << endl;
    return 0;
}
int main()
{
	int i=0,p,len=0;
	cin >> a;
	len = strlen(a);
	boy = a[0];
	girl = a[len-1];
    work(0,len-1);
    return 0;
}
