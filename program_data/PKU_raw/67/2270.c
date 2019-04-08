//***************************
//* @author ??          **
//* @date 2012-09-26       ** 
//* @description ?????   **
//***************************
int main()                  //?????
{
	int n, x[100], y[100], c[100], i; //????
	double a, b;                      //????
	//cout<<"???????????"<<endl; //??
	cin >> n;      //????
	cin >> x[1] >> y[1];     //????
	a = (double) y[1] / x[1]; 
	for(i = 2 ; i <= n ; i++)    //????
	{
		cin >> x[i] >> y[i];   //???????
		b = (double) y[i] / x[i];  
		if( b< a-0.05)         //??????
			c[i] = 0;
			
		else if( b >= a-0.05 && b <= a+0.05)   //??????
			c[i] = 1;
			
		else               //??????
			c[i] = 2;
			
	}
	for( i=2 ; i<=n ; i++)        //????
	{
		if(c[i] == 0)          //??????
			cout << "worse" << endl;
		else if(c[i] == 1)        //??????
            cout << "same" << endl;
		else                   //??????
			cout << "better" << endl;
	}
 	return 0;        //?????
}
		



