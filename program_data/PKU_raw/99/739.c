//************************
//* 9.cpp
//*   ?????
//*  Created on: 2012-10-1
//*  Author: ??   1200012934
//*************************
int main()               //???
{

	//?????n?????i???????age????
	//????????????
	double n = 0, i = 0, age = 0, num1_18 = 0,
		num19_35 = 0, num36_60 = 0, num61_ = 0;
	cin >> n;              //????????
	for (i = 1; i <= n; i++)  //??
		{cin >> age;      //?????????age

		  //?????????age???????
		if (age >= 1 && age <= 18)
	    	{num1_18 = num1_18 + 1;}
	    else
	    	{if (age <= 35)
	    		{num19_35 = num19_35 + 1;}
	    	 else
	    		{if (age <= 60)
	    			{num36_60 = num36_60 + 1;}
	    		else
	    			{num61_ = num61_ + 1;}
	    		}
	    	}
		}
    cout << setprecision(2) << fixed;     //???????
	cout << "1-18: " << (double) num1_18 / n * 100 << "%" << endl;   //??
	cout << "19-35: " << (double) num19_35 / n * 100 << "%" << endl;
	cout << "36-60: " << (double) num36_60 / n * 100 << "%" << endl;
	cout << "60??: " << (double) num61_ / n * 100 << "%";
	return 0;
}         //?????