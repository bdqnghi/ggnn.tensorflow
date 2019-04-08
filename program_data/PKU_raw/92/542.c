
void sort(int a[],int n);
int money(int t[],int q[],int n);

void main()
{
	int tj[1001], qw[1001], n = 0, i = 0;
	while(1)
	{
		scanf("%d",&n);
		if(n == 0) 
			break;
		for(i = 0; i < n; i++)
			scanf("%d", &tj[i]);
		for(i = 0; i < n; i++)
			scanf("%d", &qw[i]);
		sort(tj, n);
		sort(qw, n);
		printf("%d\n",money(tj, qw, n));
	}
}

void sort(int a[],int n)
{
	int temp = 0,i = 0, j = 0;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
}

int money(int t[],int q[],int n)
{
	int win = 0, draw = 0, lose = 0;
	int w = 0, j = 0;
	int wend = 0, jend = 0, endw = 0, endj = 0;
	int flag = 0;
	wend = jend = n-1;
	for (w = j = 0; j < n; j++)
	{
		if(q[w] < t[j])
		{
			win++;
			w++;
		}
		else if(q[w] > t[j])
		{
			lose++;
			wend--;
		}

		else if(q[w]==t[j]){
			if(j==jend){
				draw++;
				break;
			}
			for(endw=wend,endj=jend;endj>j;endw--,endj--){
				if(q[endw]>=t[endj]){
					flag=1;
					break;
				}
			}
			if(flag&&t[j]!=q[endw]){
				lose++;
				wend--;
			}
			else{
				draw++;
				w++;
			}
		}
		flag=0;
	}
	return 200*(win-lose);
}
