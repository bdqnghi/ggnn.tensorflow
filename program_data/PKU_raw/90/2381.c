int number(int,int);
int main()
{
	 int n, apple, plate;
	 cin >> n;
	 for(int i = 1; i<= n; i++)
	 {
		 cin >> apple >> plate;
		 cout << number(apple, plate) << endl;
	 }
	 return 0;
}
int number(int apple, int plate)
{
	if(apple < 0)
		return 0;
	if(apple == 0)
		return 1;
	if(apple > 0 && plate == 1 || apple == 1 && plate > 1)
		return 1;
	else return number(apple, plate - 1) + number(apple - plate, plate);
}
