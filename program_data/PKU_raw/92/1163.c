
int qw[M], tj[M];
int tmp[M];

void sort(int a[], int n)
{
    int k,i,b,e;
    if (n <= 1)
	return;
    k = n/2;
    sort(a, k);
    sort(a+k, n-k);
    for (i=0; i<k; i++)
	tmp[i] = a[i];
    for (i=k; i<n; i++)
	tmp[i] = a[n+k-i-1];
    b=0, e=n-1;
    for (i=0; i<n; i++) {
	if (tmp[b] <= tmp[e])
	    a[i] = tmp[b++];
	else a[i] = tmp[e--];
    }
}

int main()
{
    int n, i, res;
    int b1,e1, b2,e2;
    while (scanf("%d", &n)!=EOF && n!=0) {
	for (i=0; i<n; i++)
	    scanf("%d", &tj[i]);
	for (i=0; i<n; i++)
	    scanf("%d", &qw[i]);
	res = 0;
	sort(tj, n);
	sort(qw, n);
	b1=b2=0, e1=e2=n-1;
	while (b1 <= e1) {
	    if (qw[b1] < tj[b2]) {
		b1++, b2++, res++;
	    }
	    else if (qw[b1] > tj[b2]) {
		e1--, b2++, res--;
	    }
	    else {
		if (qw[e1] < tj[e2]) {
		    e1--, e2--, res++;
		}
		else if (qw[e1] > tj[e2]) {
		    e1--, b2++, res--;
		}
		else {
		    if (qw[e1] > tj[b2])
			res--;
		    else if (qw[e1] < tj[b2])
			res++;
		    e1--, b2++;
		}
	    }
	}
	printf("%d\n", res*200);
    }
    return 0;
}
