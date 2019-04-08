float mgpa(int y)
{
	int gpa;
	if(y>=90 && y<=100) return 4.0;
	else if(y>=85 && y<=89) return 3.7;
	else if(y>=82 && y<=84) return 3.3;
	else if(y>=78 && y<=81) return 3.0;
	else if(y>=75 && y<=77) return 2.7;
	else if(y>=72 && y<=74) return 2.3;
	else if(y>=68 && y<=71) return 2.0;
	else if(y>=64 && y<=67) return 1.5;
	else if(y>=60 && y<=63) return 1.0;
	else return 0.0;
}
int main()
{
	int n, i, score[50], weight[50];
	float g[50], a=0.0, b=0.0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &weight[i]);
		b += weight[i];
	}
	for(i=1; i<=n; i++)
	{
		scanf("%d", &score[i]);
		g[i] = mgpa(score[i]) * weight[i];
		a += g[i];
	}
	printf("%.2f", a/b);
	return 0;
}