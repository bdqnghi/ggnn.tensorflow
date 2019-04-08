/*
 * ct.c
 *
 *  Created on: 2011-11-24
 *      Author: lin
 */

struct block
{
	int l;
	int r;
};

int mysort(void *a, void *b)
{
	struct block *aa = (struct block*)a;
	struct block *bb = (struct block*)b;
	if(aa->l == bb->l)
	{
		return bb->r - aa->r;
	}else{
		return aa->l - bb->l;
	}
}

int main()
{
	struct block in[50000];
	int n;
	int i;
	int left, right;
	scanf("%d", &n);
	for(i = 0; i < n; ++i)
	{
		scanf("%d %d", &in[i].l, &in[i].r);
	}
	qsort(in,n,sizeof(in[0]),mysort);

	left = in[0].l;
	right = in[0].r;
	for(i = 1; i < n; ++i)
	{
		if(in[i].r > right)
		{
			if(in[i].l <= right)
			{
				right = in[i].r;
			}
			else break;
		}
	}
	if(i == n)
	{
		printf("%d %d", left, right);
	}else{
		printf("no\n");
	}
	return 0;

}


