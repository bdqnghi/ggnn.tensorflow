// greedy.cpp : Defines the entry point for the console application.
//

int compare(const void *a, const void *b)
{
	int *x=(int *)a;
	int *y=(int *)b;
	return (*y)-(*x);

}
int main()
{

	int n;
	int i=0,j=0,k=0;
	int king[1000];
	int tianji[1000];
	int win=0, lose=0, equal=0;
	int game=0;
	int count=0;
	while(cin>>n)
	{
		if(n==0)
			break;	
		for(i=0;i<n;i++)
			cin>>tianji[i];
		for(i=0;i<n;i++)
			cin>>king[i];
		qsort(tianji, n, sizeof(tianji[0]),compare);
		qsort(king, n, sizeof(king[0]), compare);//?????
	//	int game=0;//game= ????????, game ?? ??????? n???????
	//	int count=0;//
	//	int ans=0;
		j=0;
		i=0;
		while( j<game && tianji[j]<king[i])
				i++;
		int max=-1000000;
		for(k=i;k<n;k++)
		{
			game=-200*k;
			count=0;
			for(j=k;j<n;j++)
			{
				if(tianji[count]<king[j])
					game+=-200;
				else
					if(tianji[count]==king[j])
						game+=0;
					else
						game+=200;
					count++;

			}
			if(game>max)
				max=game;
			//cout<<"game"<<game<<endl;
		}
		cout<<max<<endl;

	}
	return 0;
}