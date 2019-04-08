/**
* @file C8Q5.cpp
* @author ???
* @date 2013-11-17
* @description
* ??????:??2?N??
*/



int main()
{
    char c[MAX]; //????
    int n;
    int pos = 0; //????????


    memset(c,0,MAX*sizeof(char));  //???

    cin >> n;

    c[0] = 1;  //2?0???1

    for (int i = 0 ; i < n; i++)  //??n?
    {
        for (int j = 0 ; j < MAX ; j++)
        {
            c[j] *= 2; //??
        }
        for (int k = 0 ; k < MAX - 1; k++)  //??????
        {
            if (c[k] >= 10)  //????
            {
                c[k+1] += c[k]/10;
                c[k] %= 10;
            }
            if (c[k] != 0 && k > pos)  //????????
                pos = k;
        }
    }

    for (int i = pos ; i >= 0 ; i--)  //???????
        cout << (char)(c[i]+'0');
    cout << endl;
}
