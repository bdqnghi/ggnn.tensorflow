//?????
int main()
{
	int start[1001],end[1001], max=0,num[1001],sum = 1,i=1,j=1,a;
	char x;
	memset(num,0,sizeof(num));
	memset(start,0,sizeof(start));
	memset(end,0,sizeof(end));
	cin >> start[0];
	while(cin >>  x)
	{
		if (x != ',')	break;
		cin >> start[i];
		i++;
		sum++;
	}
	end[0] = x-'0';
	while(cin >> x)
	{
	  if(x==',') break;
	  end[0] = 10*end[0]+(x-'0');
	}
	while(cin >> end[j])
	{
		j++;
		if (j == sum)	break;
		cin >> x;
	}
	for(i=0; i<sum;i++)
	{
		for (a=start[i];a<end[i];a++)
		{
			num[a]++;
		}
	}
	for (i = 0;i<=1000;i++)
	{
		if (max<num[i])	max= num[i];
	}
	cout << sum <<  " " <<max;

return 0;
}