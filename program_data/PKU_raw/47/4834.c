/*
 *???: reverse_array.cpp
 *??: ???
 *????: 2012-12-09
 *??: ????
 */



int main()
{
	int n;
	int array[MAXN];
	int *begin,*end; //??????

	cin >> n;
	for (int i=0;i<n;i++)
		cin >> array[i];
	begin=array; end=array+n-1;
	while (begin<end){
		int tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
	for (int i=0;i<n;i++){
		if (i) cout << ' ';
		cout << array[i];
	}
	cout << endl;
	return 0;
}

