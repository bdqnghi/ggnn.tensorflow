//
//  main.cpp
//  LZW_Work
//
//  Created by LZW on 9/28/12.
//
//



int main ()
{    
    int n;
    cin >> n;
    int a[100] = {0};
    int i;
    for (i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (i = n - 1; ; i--)
    {
        if(i == 0)
        {
            cout << a[0];
            break;
        }
        cout << a[i] << " ";
    }
}
