int main(int argc, char* argv[])
{
	int n,k,he=0, shu[1000],i,j,c=0,d=0;
	scanf ("%d %d", &n, &k);
	for (i=0; i<n; i++)
		scanf ("%d", &shu[i]);
    for (i=0;i<n; i++){
		for (j=i+1;j<n;j++){
			he=shu[i]+shu[j];
			if (he==k)
				d++;
			c++;
			}
	}
	if (d==0)
		printf ("no");
	else 
		printf ("yes");
	return 0;
}

