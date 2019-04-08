int main()
{
    char a[105]; int t[100], u[100], flag=1, tmp, j; memset (a,0,sizeof(a)); memset(t,0,sizeof(t));memset (u,0,sizeof(u));
    cin.getline(a, 105);
    for (int i=0; i<strlen(a); i++)
        t[i]=a[i]-'0';
    if (strlen(a)==1)
        cout << t[0]/13 << endl << t[0]%13 << endl;
    else if (strlen(a)==2)
        cout << (10*t[0]+t[1])/13<< endl<< (10*t[0]+t[1])%13 <<endl;
    else
    {
        tmp=10*t[0]+t[1]; u[0]=tmp/13;
        for (int i=2;i<strlen(a);i++)
        {
            tmp%=13;
            tmp=t[i]+tmp*10;
            u[flag]=tmp/13;
            flag++;
        }
        tmp%=13;
        for (j = 0; j < flag; j++)
            if (u[j]!=0) break;
        for (;j<flag;j++)
            cout << u[j];
        cout << endl;
        cout << tmp<<endl;
    }
    return 0;
}