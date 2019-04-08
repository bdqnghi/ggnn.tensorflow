int main()
{
    int n ;
    cin>> n ;
    char a[100] = {0};
    a[0] = 1 ;
    int length = 1 ;
    for (int i = 0 ; i< n ; i++)
    {
        int add = 0 ;
        for (int j = 0 ; j<length ; j++)
        {
            a[j] *= 2 ;
            a[j] += add ;
            if (a[j] > 9)
            {
                int temp = a[j] ;
                add = temp /10 ;
                a[j] = temp % 10 ;
            }
            else
            {
                add = 0 ;
            }

        }
        if (add > 0)
        {
            a[length] = add ;
            length ++ ;
        }
    }
    for (int i = 0 ; i< length ; i++ )
        a[i] += '0' ;
    for (int i = length-1 ; i>= 0 ;i--)
        cout<<a[i] ;
    return  0;
}
