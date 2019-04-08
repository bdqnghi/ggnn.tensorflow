//***********************************
//*?????? 1300012809         **
//*???2013.10.25                **
//*???????                  **
//***********************************
int main()
{
    int n,i,time,jishu; 
	cin >> n;
	time=0;
	jishu=0;
	for (i=1;i<=n;i++)                                 //??n???
	{
		int a,b;
		cin >> a >> b ;
		if ((a<90||a>140||b<60||b>90)&&jishu<=time) jishu = time;     //?????????
		if (a>=90&&a<=140&&b>=60&&b<=90)               //??????????
		{
			time = time+1;
					}
        else 
		{
			time = 0;                                    //????????????
		}
		if (jishu<time) jishu = time;                    //???????????
	}
    cout << jishu << endl;
	return 0 ;
}