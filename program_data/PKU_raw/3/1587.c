/*
 * ct.c
 *
 *  Created on: 2011-11-24
 *      Author: lin
 */

int mysort(void *a, void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int in[1000];
	int n, k;
	int i;
	int found = 0;
	scanf("%d %d", &n, &k);
	for(i = 0; i < n; ++i)
	{
		scanf("%d", &in[i]);
	}
	qsort(in,n,sizeof(int),mysort);

	int *lp = &in[0];
	int *rp = &in[n - 1];
	while(lp != rp)
	{
		i = *lp + *rp;
		if(i < k)
		{
			++lp;
		}else if(i > k)
		{
			--rp;
		}else{
			found = 1;
			break;
		}
	}
	if(found)
	{
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;

}


