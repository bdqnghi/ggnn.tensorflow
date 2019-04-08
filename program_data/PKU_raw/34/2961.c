int change(int x)                              //????
{
	int y=0;
	if (x%2==0)                                //??????
	{
		y=x/2;
		printf("%d/2=%d",x,y);
		cout <<endl;
	}
	else                                       //??????
	{
		y=3*x+1;
		printf("%d*3+1=%d",x,y);
		cout <<endl;
	}
	return y;
}
int main()                                      
{
	int num=0;
	cin >>num;
	while (num!=1) num=change(num);            //??????
          cout <<"End";
	return 0;
}