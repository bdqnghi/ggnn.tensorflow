

int tj[M], qw[M];
int n;

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int i, b,e, bb, ee, sum;
    while (scanf("%d", &n)!=EOF && n!=0) {
	for (i=0; i<n; i++)
	    scanf("%d", &tj[i]);
	for (i=0; i<n; i++)
	    scanf("%d", &qw[i]);
	qsort(tj, n, sizeof(int), cmp);
	qsort(qw, n, sizeof(int), cmp);
	b=bb=0; e=ee=n-1;
	sum = 0;
	while (b <= e) {
	    if (tj[e] > qw[ee])
		++sum, --e, --ee;
	    else if (tj[e] < qw[ee])
		--sum, ++b, --ee;
	    else if (tj[b] > qw[bb])
		++sum, ++b, ++bb;
	    else if (tj[b] < qw[bb])
		--sum, ++b, --ee;
	    else {
		if (tj[b] < qw[ee])
		    --sum, ++b, --ee;
		else ++b, --ee;
	    }
	}
	printf("%d\n", sum*200);
    }
    return 0;
}