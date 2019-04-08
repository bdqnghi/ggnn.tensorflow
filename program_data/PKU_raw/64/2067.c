int n, t = 1;
struct dian
{
	int x;
	int y;
	int z;
}a[11], *p = &a[1];
struct ju
{
	int p1;
	int p2;
	double d;
}b[100], temp;
void fsort(int k)
{
	int i;
	for(i = k + 1; i <= t; i++)
	{
		if(b[k].d < b[i].d)
		{
			temp = b[k];
			b[k] = b[i];
			b[i] = temp;
		}
	}
}
int main()
{
	int i, j;
	cin >> n;
	cout << fixed << setprecision(2);
	for(i = 1; i <= n; i++)
	{
		cin >> p->x >> p->y >> p->z;
		p++;
	}
	for(i = 1; i <= n - 1; i++)
	{	
		for(j = i + 1; j <= n; j++)
		{
			b[t].p1 = i;
			b[t].p2 = j;
			b[t].d = pow(pow(a[i].x - a[j].x, 2.0) + pow(a[i].y - a[j].y, 2.0) + pow(a[i].z - a[j].z, 2.0), 0.5);
			t++;
		}
	}
	t--;
	for(i = 1; i < t; i++)
	{
		fsort(i);
	}
	for(i = 1; i < t; i++)
	{
		if(b[i].d == b[i + 1].d)
		{
			if(b[i].p1 > b[i + 1].p1)
			{
				temp = b[i + 1];
				b[i + 1] = b[i];
				b[i] = temp;
			}
			else
			{
				if(b[i].p1 == b[i + 1].p1 && b[i].p2 > b[i + 1].p2)
				{
					temp = b[i + 1];
					b[i + 1] = b[i];
					b[i] = temp;
				}
			}
		}
	}
	for(i = 1; i <= t; i++)
	{
		cout << "(" << a[b[i].p1].x << "," << a[b[i].p1].y << "," << a[b[i].p1].z << ")" << "-" << "(" << a[b[i].p2].x << "," << a[b[i].p2].y << "," << a[b[i].p2].z << ")" << "=" << b[i].d << endl;
	}
	return 0;
}

	 
