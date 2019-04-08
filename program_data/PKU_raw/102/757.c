
typedef struct area
{
	char sex[8];
	float hight;
}area;

area a[100];

int cmp(const void *a, const void *b)
{
	area *aa = (area *)a;
	area *bb = (area *)b;
	if (aa->sex[0] == 'm' && bb->sex[0] == 'f')
		return -1;
	else if (aa->sex[0] == 'f' && bb->sex[0] == 'm')
		return 1;
	else if (aa->sex[0] == 'm')
	{
		return aa->hight < bb->hight ? -1 : 1;
	}
	else
		return aa->hight < bb->hight ? 1 : -1;
}

int main()
{
	int n, i;
	//freopen("in.txt", "r", stdin);
	scanf("%d", &n);
	for (i = 0; i < n; i ++)
	{
		scanf("%s%f", &a[i].sex, &a[i].hight);
	}
	qsort(a, n, sizeof (area), cmp);
	for (i = 0; i < n; i ++)
	{
		printf("%.2f", a[i].hight);
if (i < n -1)
printf(" ");
	}
	return 0;
}