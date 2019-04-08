/**
* @file C8Q4.cpp
* @author ???
* @date 2013-11-17
* @description
* ??????:?????
*/



int main()
{
    char c1[MAX]; //???
    char c2[MAX]; //??
    int n;  //????
    cin >> n;

    for (int i = 0 ; i < n; i++)
    {
        cin.get(); //????????
        cin.getline(c1,MAX-1);
        cin.getline(c2,MAX-1);

        int len1,len2 ;
        len1 = strlen(c1);
        len2 = strlen(c2);

        int p1,p2;  //????????
        p2 = len2-1;
        p1 = len1-1;

        while(p2 >= 0)
        {
            c1[p1] -= c2[p2] - '0';  //????
            if (c1[p1] < '0')  //????
            {
                for (int i = p1 - 1 ; i >= 0 ; i--) //??????
                {
                    c1[i+1] += 10;
                    c1[i] -= 1;
                    if (c1[i] >= '0')  //????????
                        break;
                }
            }
            p2--;p1--;  //?????????
        }

        for(p1 = 0 ; p1 < len1 ; p1++ )  //?????0
        {
            if (c1[p1] != '0')
                break;
        }

        cout << c1 + p1 << endl;
    }
}
