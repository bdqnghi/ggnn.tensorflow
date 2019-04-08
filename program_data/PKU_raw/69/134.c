int an1[MAXLEN+10];
int an2[MAXLEN+10];
char sline1[MAXLEN+10];
char sline2[MAXLEN+10];
int ADD(int nMAXLEN, int* a1, int* a2)
{
    int i=0, j=0;
    int highest;
    for(i=0; i<=nMAXLEN; i++)
    {
        a1[i]+=a2[i];
        if(a1[i]>=10)
        {
            a1[i]-=10;
            a1[i+1]++;
        }
        if(a1[i]>0)
            highest=i;
    }
    return highest;
}
int main()
{
    int i=0, j=0;
    memset(an1, 0, sizeof(an1));
    memset(an2, 0, sizeof(an2));
    //scanf("%s",sline1);
    //scanf("%s",sline2);
    cin>>sline1>>sline2;
    int len1 = strlen(sline1);
    for(j=0, i = len1 - 1; i>=0; i--)
    {
        an1[j++] = sline1[i] - '0';
    }
    int len2 = strlen(sline2);
    for(j=0, i = len2 - 1; i>=0; i--)
    {
        an2[j++] = sline2[i] - '0';
    }
    int k = ADD(MAXLEN, an1, an2);
    for(i=k; i>=0; i--)
    {
        //printf("%d",an1[i]);
        cout<<an1[i];
    }
    return 0;
}





