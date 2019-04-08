

int cmp(const void * e1, const void * e2)
{
	return *(int *)e1 - *(int *)e2;
}
int main()
{
	int tian[1000];
	int qi[1000];
	int i,n;
	int tf,tl;
	int qf,ql;
	int count;
	cin>>n;
	while(n >0)
	{
		for(i = 0 ;i < n; i++)
			scanf("%d", & tian[i]);
		for(i =0 ;i < n; i++)
			scanf("%d", & qi[i]);
		qsort(tian, n, sizeof(int), cmp );
		qsort(qi,   n, sizeof(int), cmp );

		tf = 0 ;
		qf = 0 ;
		tl = n-1; 
		ql = n-1;
		count = 0;
		while(n--)
		{
			if(tian[tf] > qi[qf] ){  //??? 
				count++;
				tf++;
				qf++;
			}
			else if(tian[tf] < qi[qf]){
				tf++;
				ql--;
				count --;
			}
			else{//  ????
				if(tian[tl] > qi[ql]){
					tl--;
					ql--;
					count++;
				}
				else if(tian[tl] < qi[ql]){
					count --;
					tf++;
					ql--;
				}
				else{//  ????
					if(tian[tf] < qi[ql])
						count--;
					//else if ==
					tf++;
					ql--;
				}

			}
			
		}
		printf("%d\n", count * 200);
		// next
		scanf("%d", & n);
	}
	return 0;
}