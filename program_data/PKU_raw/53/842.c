

int main()
{
    int n;
    cin >> n;

    int nums[n];

    for(int i = 0; i < n; i++)  cin >> nums[i];

    int *p,*end;
    p = nums;
    end = nums + n;
    while(true)
    {
        end=remove(p+1,end,*p);
        if(p!=end-1)
        {
            cout << *p << ',';
        }
        else
        {
            cout << *p;
            break;
        }
        p++;
    }
    return 0;
}
