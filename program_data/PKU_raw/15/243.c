
int main(int argc, char* argv[])
{
	int n,i=0,j;
	int N,k,p;
	scanf ("%d",&n);
	N=n*n;
	for (k=0;k<N;k++)
	{
		scanf ("%d",&p);
		if (p==0)
			i++;
	}
	j=((i/4)-1)*((i/4)-1);
    printf ("%d\n",j);
}