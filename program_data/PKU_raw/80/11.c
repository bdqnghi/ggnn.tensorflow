
int month[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int yadd(int y)
{
 if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) return 1;
 else return 0;
}
int madd(int y, int m)
{
 if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
	 if (m == 2) return 1;
 return 0;
}
int ydays(int y1, int y2)
{
	int ans = 0;
	while (y1!=y2) 
	{
		ans += yadd(y1) + 365;
		y1++;
	}
	return ans;
}
int mdays(int y, int m, int d)
{
	int ans=0, i, j;
	// month
	i=1; 
	while (i<m)
	{
		ans += month[i] + madd(y, i);
		i++;
	}
	ans += d;
	return ans;
}
int main(){
	int y1, y2, m1, m2, d1, d2;
	int ans;
	scanf("%d %d %d", &y1, &m1, &d1);
	scanf("%d %d %d", &y2, &m2, &d2);
	ans = ydays(y1, y2) - mdays(y1, m1, d1) + mdays(y2, m2, d2);
	printf("%d", ans);
	return 0;
}