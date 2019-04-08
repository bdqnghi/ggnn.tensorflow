
int run(int y)
{
	if((y%4 == 0) && (y%100 != 0)) return 1;
	else if(y%400 == 0) return 1;
	else return 0;	
}

int main()
{
	int n, i, j, y, temp, m1, m2, mark, a[13];
	a[1] = a[3] = a[5] = a[7] = a[8] = a[10] = a[12] = A;
	a[4] = a[6] = a[9] = a[11] = B;
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		a[2] = C;
		a[0] = 0;
		scanf("%d%d%d", &y, &m1, &m2);
		mark = run(y);
		if(mark == 1) a[2] = C+1;
		if(m1<m2)
		{
loop:
			for(j=m1;j<m2;j++)
			{
				a[0] += a[j];
			}
			if(a[0]%7 == 0) printf("YES\n");
			else printf("NO\n");
		}
		else
		{
			temp = m1;
			m1 = m2;
			m2 = temp;
			goto loop;
		}
	}
	return 0;
}