//* * * * * * * * * * * * * * * * * * * * * * * * 
//*????????                             *
//*????????.cpp                         *
//*?????  1000012839                       *
//*???2010.12.18                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 

struct Dot
{
	int dot1[3];	//	????????
	int dot2[3];	//	????????
	double distance;	//	???????
} s[45], temp;
int main()
{
	int dot[10][3];	//	??????
	int n;	//	?????
	int i, j, k;	//	?????

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> dot[i][0] >> dot[i][1] >> dot[i][2];	
	k = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			s[k].dot1[0] = dot[i][0];
			s[k].dot1[1] = dot[i][1];
			s[k].dot1[2] = dot[i][2];
			s[k].dot2[0] = dot[j][0];
			s[k].dot2[1] = dot[j][1];
			s[k].dot2[2] = dot[j][2];
			s[k].distance = sqrt(pow(dot[i][0] - dot[j][0],2) + pow(dot[i][1] - dot[j][1],2) + pow(dot[i][2] - dot[j][2],2));
			k++;	//	??????????????
		}
	}
	for (i = 0; i < k - 1; i++)	//	??k?n*(n-1)/2?
	{
		for (j = 0; j < k - i; j++)
		{
			if (s[j].distance < s[j + 1].distance)
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;	//	??????
			}
		}
	}
	for (i = 0; i < k; i++)
		cout << '(' << s[i].dot1[0] << ',' << s[i].dot1[1] << ',' << s[i].dot1[2] << ")-(" << s[i].dot2[0] 
		<< ',' << s[i].dot2[1] << ',' << s[i].dot2[2] << ")=" << fixed << setprecision(2) << s[i].distance << endl;
	return 0;
}




	
		



