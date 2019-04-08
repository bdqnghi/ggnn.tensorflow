int a[1010],b[1010];
int comp(const void * elem1, const void * elem2)
{
	return (*(int *) elem1) - (*(int *)elem2);
}
int main()
{
	int n, i, j, heada, taila, headb, tailb, win;
	cin >> n;
	while( n!= 0){
		for( i = 0 ; i < n ; i++) cin >> a[i];
		for( i = 0 ; i < n ; i ++) cin >> b[i];
		qsort(a,n,sizeof(int),comp);
		qsort(b,n,sizeof(int),comp);
		heada = headb = 0;
		taila = tailb = n-1;
		win = 0;
		while(tailb >= headb){
			if(a[taila] > b[tailb]){
				taila--;
				tailb--;
				win++;
			}
			else if(a[heada] > b[headb]){
				heada++;
				headb++;
				win++;
			}
			else{
				if(a[heada] < b[tailb]) win --;
				heada++;
				tailb--;			
			}		
		}
		cout << win * 200 <<endl;
		cin >> n;
	}
}