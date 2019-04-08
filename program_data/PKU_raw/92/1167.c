
int compare(const void * p1, const void * p2) // ?????????
{
	return *((int *)p2) - * ((int *)p1);
};
int main()
{
	int n;
	int hq[10002]; // ??????
	int ht[10002]; // ??????
	int i, j, head, ans, m;
	int tailt, tailq;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		for (i = 0; i < n; i++)
		{
			cin >> ht[i];
		}
		qsort(ht, n, sizeof(int), compare);
		for (i = 0; i < n; i++)
		{
			cin >> hq[i];
		}
		qsort(hq, n, sizeof(int), compare);
		head = 0;
		tailt = tailq = n - 1;
		ans = 0;
		for(i=0;i<n;i++)
        {
            if(ht[head]>hq[i])
            {
                head++;
                ans+=200;
            }
            else if(ht[head]<hq[i])
            {
                tailt--;
                ans-=200;
            }
            else if(ht[head]==hq[i])
            {
                for(j=tailt,m=tailq;j>=head;j--,m--)
                {
                    if(ht[j]>hq[m])
                    {
                        ans+=200;
                        tailt--;
                        tailq--;
                    }
                    else
					{
						if(ht[j]<hq[i]) ans-=200;
						tailt=--j;
						tailq=m;
						break;               
					}
                }
            }
			
            if(head>tailt) break;
        }
		cout << ans << endl;
	}
	return 0;
}


