char name[101][22], yn[101][3];
int s[101][4];
void main()
{
	int n, i, j, reward[101], sumreward=0;
	int f1(int, int), f2(int, int), f3(int), f4(int, char), f5(int, char);
	
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%s %d %d %c %c %d", &name[i], &s[i][1]/*??????*/, &s[i][2]/*??????*/, &yn[i][1]/*???????*/, &yn[i][2]/*?????????*/, &s[i][3]/*??????*/);
		
		reward[i] = f1(s[i][1], s[i][3]) + f2(s[i][1], s[i][2]) + f3(s[i][1]) + f4(s[i][1], yn[i][2]) + f5(s[i][2], yn[i][1]);
		
		sumreward=sumreward+reward[i]; 
	};//????
	
	for (i=1; i<=n; i++)
	{
		int a=0;
		for (j=1; j<=i-1; j++)
		{
			if(reward[i]<reward[j]) a=a+1;
		};
		for (j=i+1; j<=n; j++)
		{
			if(reward[i]<reward[j]) a=a+1;
		};
		
		if (a==0) {printf("%s\n%d\n%d",name[i],reward[i],sumreward); break;};
	};
	
}
int f1(int x, int y)//1) ?????
{
	if(x>80 && y>=1) return 8000;
	else return 0;
}
int f2(int x, int y)//2) ?????
{
	if(x>85 && y>80) return 4000;
	else return 0;
}
int f3(int x)//3) ?????
{
	if(x>90) return 2000;
	else return 0;
}
int f4(int x, char y)//4) ?????
{
	if(x>85 && y=='Y') return 1000;
	else return 0;
}
int f5(int x, char y)//5) ?????
{
	if(x>80 && y=='Y') return 850;
	else return 0;
}