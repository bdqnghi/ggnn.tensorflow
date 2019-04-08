int PlaceApple(int,int);
int main()
{
	int Apple,Plate,t;
	cin>>t;
	while(t--)
	{
		cin>>Apple>>Plate;
		cout<<PlaceApple(Apple,Plate)<<endl;
	}
}
int PlaceApple(int AppleNumber, int PlateNumber)
{
    if(AppleNumber < 0 || PlateNumber == 0)
        return 0;
    if(AppleNumber == 1 || AppleNumber == 0 || PlateNumber == 1)
        return 1;
    int sum=0;
    for(int i = 0; i <= AppleNumber/PlateNumber; i++)
        sum += PlaceApple(AppleNumber - PlateNumber *i, PlateNumber - 1);
    return sum;
}