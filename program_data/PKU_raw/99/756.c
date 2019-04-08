//***************************
//* @author ??          **
//* @date 2012-09-26       ** 
//* @description ?????   **
//***************************
int main()                //?????
{
	int n, a = 0, b = 0, c = 0, d = 0, i ;   //????
    //cout<<"?????"<<endl;   //??
	cin >> n;                    //??
	int m[100];              //????
	//cout<<"???????"<<endl;   //??
	for(i = 1; i <= n; i++)            //????
	{
		cin >> m[i];             //??
		if(m[i] <= 18)            //????
		{a++;}
		else if(m[i] <= 35)
		{b++;}
		else if(m[i] <= 60)
		{c++;}
		else 
		{d++;}
	}
	//cout<<"????????"<<endl;
  cout << fixed << setprecision(2) << "1-18: " << (double)a/n*100;//??
  printf("%%");
  cout << endl;
  cout << "19-35: " << (double)b/n * 100;    //??
  printf("%%");
  cout << endl;
  cout << "36-60: " << (double)c/n * 100;    //??
  printf("%%");
  cout << endl;
  cout << "60??: " << (double)d/n * 100;    //??
  printf("%%");
  cout << endl;
  return 0;        //?????
}