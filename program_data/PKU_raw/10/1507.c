int h[30];
int result[30];

int findFirstLess(int num)
{
	int index = 0;
	while(1)
	{
		if(result[index] < num)
			return index;
		index++;
	}
}

int main()
{
	int k, i = 0, r,p, ans;
	scanf("%d ", &k);
	while(1)
	{
		if(i >= k)
			break;
		scanf("%d", h + i);
		i++;
	}
	result[0] = h[0];
	i = 1;
	r = 0;
	while(i < k) // ????????, i.e. ???????
	{
		if(h[i] <= result[r]) // h?????????
			result[++r] = h[i]; //??
		if(h[i] > result[r])
			result[findFirstLess(h[i])] = h[i];
		i++;
	}
//	printf()
	

	//??????????
/*
	i = 0;
	p = 0;
	ans = 0;
	while(i < k)
	{
		if(h[i] == result[p + 1])
		{
			p++;
			continue;
		}
		if(h[i] == result[p])
			ans++;
		i++;
	}
*/
	printf("%d\n", r+1);

	return 0;
}