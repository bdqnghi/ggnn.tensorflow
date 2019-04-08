

typedef long long ll;

const int maxn = 100;
double d0[maxn], d1[maxn];
int cnt0, cnt1;
int n;

int main()
{
	while(scanf("%d", &n) == 1)
	{
		cnt0 = cnt1 = 0;
		for(int i = 0; i < n; i++)
		{
			char s[100];
			double tmp;
			
			scanf("%s%lf", s, &tmp);	
			if(s[0] == 'm')
				d0[cnt0++] = tmp;
			else
				d1[cnt1++] = tmp;
		}
		
		sort(d0, d0 + cnt0);
		sort(d1, d1 + cnt1);
		char flag = 0;
		for(int i = 0; i < cnt0; i++)
		{
			if(flag)	putchar(' ');
			flag = 1;
			printf("%.2lf", d0[i]);	
		}
		
		for(int i = cnt1 - 1; i >= 0; i--)
		{
			if(flag)	putchar(' ');
			flag = 1;
			
			printf("%.2lf", d1[i]);	
		}
		
		puts("");
	}
	return 0;	
}
