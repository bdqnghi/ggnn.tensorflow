
int kobe(int n)
{
    int i=0,bj=1;
    for (i=0;i<n;i++)
        bj*=10;
    return bj;
}



int reverse(int num)
{
    int i=0,j=0,x=0,rev=0,a[100];
    if (num==0)
        return 0;
    while (num !=0)
    {
        a[i] = num%10;
        num /=10;
        j++;
        i++;
        x++;


    }
    j-=1;
    for (i=0; i<x; i++)
    {
        rev += a[i]* kobe (j);
        j--;

    }


    return rev;
}


int main()
{
    int n;
    while (cin >> n)
    cout << reverse(n) <<endl;
    return 0;
}

