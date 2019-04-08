int main ()
{
	int sz[100];
         int i;
	int a , b , c , e;
	scanf("%d", &a);
	for(i=0 ; i<a; i++){
		scanf("%d", &(sz[i]));
	}
	for(i=0; i<a-1; i++){
		if(sz[i] > sz[i+1]){
			e = sz[i];
			sz[i] = sz[i+1];
			sz[i+1] = e;
		}
	}		
	b=sz[i];
	for(i=0 ; i<a-2 ; i++){
		if(sz[i] > sz[i+1]){
			e = sz[i];
			sz[i] = sz[i+1];
			sz[i+1] = e;
		}
	}		
	c=sz[i];
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}
