/*
 *???: 1.cpp
 *??????
 *????: 2012-10-15
 *??: ????????n??????????????????????????????
 */


int main ()
{
    int n = 0,iCounter = 1,iHour = 0,iResult = 0,iHigh = 0,iLow = 0;
    cin >> n;
    while (iCounter <= n)
    {
        cin >> iHigh >> iLow;
        if ((iHigh >= 90) + (iHigh <= 140) == 2 && (iLow >= 60) + (iLow <= 90) == 2)
        {
            iHour++;                                                                    //???? ??????1
            if (iResult < iHour)
                iResult = iHour;                                                        //?????????
        }
            
        else iHour = 0;                                                                 //?? ??????
        iCounter++;
    }
    cout << iResult << endl;
    return 0;
}