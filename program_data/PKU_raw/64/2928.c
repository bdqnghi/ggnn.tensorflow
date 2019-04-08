//**************************
//*?????(14-4) ????  **
//*?????? 1200012888 **
//*???2013.12.11**
//**************************
struct							//????????? Point ?? x y z ??
{
	int x;
	int y;
	int z;
}Point[10];						//????? Point
struct dis						//????????? dis ?? ????d???????Point????????
{
	int pos_1;
	int pos_2;
	double d;
}Dis[45];
int main()
{
	int n;
	cin >> n;
	for (int i = 0 ; i < n ; i++)								//??n?????
	{
		cin >> Point[i].x >> Point[i].y >> Point[i].z;
	}
	int count = 0;												//count????
	for (int i = 0 ; i < n ; i ++)
	{
		for (int j = i + 1 ; j < n ; j ++)
		{
			Dis[count].d = sqrt(1.0*(Point[i].x - Point[j].x)*(Point[i].x - Point[j].x) + (Point[i].y - Point[j].y)*(Point[i].y - Point[j].y) + (Point[i].z - Point[j].z)*(Point[i].z - Point[j].z)); 
																//???????
			Dis[count].pos_1 = i;								//?????????
			Dis[count].pos_2 = j;
			count ++;
		}
	}
	for (int i = 0 ; i < count - 1 ; i ++)						//?????
	{
		for (int j = 0 ; j < count - i - 1; j++)
		{
			if (Dis[j].d < Dis[j + 1].d)
			{
				struct dis temp;
				temp = Dis[j];
				Dis[j] = Dis[j + 1];
				Dis[j + 1] = temp;
			}
		}
	}
	for (int i = 0 ; i < count ; i ++)						 //????????
	{
		cout << '(' <<  Point[Dis[i].pos_1].x << ','<<  Point[Dis[i].pos_1].y << ','<<  Point[Dis[i].pos_1].z << ')' << '-' << '(' <<  Point[Dis[i].pos_2].x << ','<<  Point[Dis[i].pos_2].y << ','<<  Point[Dis[i].pos_2].z << ')' << '=';
		cout << fixed << setprecision(2) << Dis[i].d << endl;
 	}
	return 0;
}