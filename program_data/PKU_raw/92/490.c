int thorse[1002];
int qhorse[1002];
int match[1002];
int compare(const void *p1,const void *p2)
{
	int *p=(int *) p1;
	int *q = (int *)p2;
	return (*q)-(*p);
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0){break;}
		memset(thorse,0,sizeof(thorse));
		memset(qhorse,0,sizeof(qhorse));
		memset(match,0,sizeof(match));
		for(int i=0;i<n;i++)
		{
			cin>>thorse[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>qhorse[i];
		}
		qsort(thorse,n,sizeof(int),compare);
		qsort(qhorse,n,sizeof(int),compare);
		int fast=0, slow=n-1, head=0, tail=n-1;
		int win=0, lose=0;
		while(fast<=slow)
		{
			if(thorse[tail]>qhorse[slow])
			{
				match[slow]=tail;
				slow--;tail--;
			}
			else if(thorse[tail]<qhorse[slow])
			{
				match[fast]=tail;
				fast++;tail--;
			}
			else 
			{
				if(thorse[head]>qhorse[fast])
				{
					match[fast]=head;
					fast++;head++;
				}
				else
				{
					match[fast]=tail;
					tail--;fast++;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(qhorse[i]>thorse[match[i]]){lose++;}
			else if(qhorse[i]<thorse[match[i]]){win++;}
		}
		int money=win*200-200*lose;
		cout<<money<<endl;
	}
	return 0;
}