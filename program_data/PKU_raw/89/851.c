/**
* @file homework.cpp
* @author ???
* @date 2010-12-9
* @description
* ??????: ?????? 
*/
int main()
{
    int n, a, b, i;
    cin >> n;
    int num[100000];
    int *p = num;
    while(cin)
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
        {
            break;
        }
        else
        {
            *(p + b) = *(p + b) + 1;
        }
    }
    for(p = num;p < num + n;p++)
    {
        if(*p == n - 1)
        {
            cout << p - num;
            break;
        }
        if(p == num + n - 1)
        {
            cout << "NOT FOUND";
        }
    } 

    return 0;   
}
