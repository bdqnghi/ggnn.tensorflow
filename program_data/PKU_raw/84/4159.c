
int main()
{

	int s, x, i,n,t;
	scanf("%d", &n);
	s=0;
	for(i=0; i<n; i++) {
		scanf("%d", &x);
	if (x>=s) 
               {
		       t=s;
               s=x;         
		}
        else if (x>t) 
        {
			t=x;
        }
	}
	printf("%d\n", s);
	printf("%d", t);
		return 0;
}