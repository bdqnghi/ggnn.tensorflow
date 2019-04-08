int main()
{
        int y,m,d,sum=0,month[2][13]={{0,0,3,3,6,1,4,6,2,5,0,3,5},{0,0,3,4,0,2,5,0,3,6,1,4,6}},leap;
        cin >> y >> m >> d;
		sum=(y-1)/4*2+y-1-(y-1)/4-y/100+y/400;  //??100?????
        leap=(y%400==0)||((y%4==0)&&(y%100!=0));
        sum=sum+month[leap][m]+d;
        switch (sum%7)
		{
        case 0: cout << "Sun." << endl;break;
        case 1: cout << "Mon." << endl;break;
        case 2: cout << "Tue." << endl;break;
        case 3: cout << "Wed." << endl;break;
		case 4: cout << "Thu." << endl;break;
		case 5: cout << "Fri." << endl;break;
		case 6: cout << "Sat." << endl;break;
		default: cout << "error" << endl;break;
		}
		return 0;
}