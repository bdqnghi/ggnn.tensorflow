int main()
{
    int n, i, m;
    m = 0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
            if(i==17) m = m;
            else if(i==27) m = m;
            else if(i==37) m = m;
            else if(i==47) m = m;
            else if(i==57) m = m;
            else if(i==67) m = m;
            else if(i>=71&&i<77) m = m;
            else if(i>=78&&i<80) m = m;
            else if(i==87) m = m;
            else if(i==97) m = m;
			else if(i%7==0) m = m;
            else m = m + i * i;
    }
    printf("%d", m);
    return 0;
}
