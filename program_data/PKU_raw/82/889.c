//
//  main.cpp
//  10.15 homework
//   ????

//  Created by airjcy on 10/8/12.
//  Copyright (c) 2012 airjcy. All rights reserved.
//



int main(int argc, const char * argv[])
{
    int n;
    cin >> n;
    int i;
    int lowPressure,highPressure;
    int maxContinueNormalHours = 0;
    int continueNormalHours = 0;
    for (i = 0; i < n; i++) {
        cin >> highPressure >> lowPressure;
        if ((highPressure >= 90)&&(highPressure <= 140)&&(lowPressure >= 60)&&(lowPressure <= 90)) {
            continueNormalHours ++;
            if (continueNormalHours > maxContinueNormalHours) {
                maxContinueNormalHours = continueNormalHours;
            }
        }
        else
            continueNormalHours = 0;
    }
    cout << maxContinueNormalHours;
}