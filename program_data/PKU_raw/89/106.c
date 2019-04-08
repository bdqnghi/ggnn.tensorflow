
int in[100000],out[100000];


int main()
{
	int n,x,y;
	scanf("%d",&n);
	while (scanf("%d %d",&x, &y), (x!=0)||(y!=0))
	{
		out[x]++;
		in[y]++;
	}

	int find=0;
	for (int i=0;i<n;i++)
	if (in[i]==n-1 && out[i]==0)
	{
		printf("%d\n",i);
		find = 1;
	}
	if (!find)
		printf("NOT FOUND\n");
	return 0;
}



