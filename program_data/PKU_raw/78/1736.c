int compare (int z, int q, int s, int l, int i)
{
	int a[4] = {z, q, s, l};
int j, k, t;
for (j = 4; j > 0; j--)
	for (k = 1; k < j; k++)
	{
	if(a[k] > a[k - 1])
	   {
		t = a[k];
		a[k] = a[k - 1];
		a[k - 1] = t;
	   }
	}
return (a[i - 1]);
}
int fout( int z, int q, int s, int l, int sum)
{
if(sum == z) cout << "z";
if(sum == q) cout << "q";
if(sum == s) cout << "s";
if(sum == l) cout << "l";
return 0;
}
int main()
{
int z, q, s, l, i, sum;
for(z = 10; z < 60; z += 10)
for(q = 10; q < 60; q += 10)
	for(s = 10; s < 60; s += 10)
			for(l = 10; l < 60; l += 10)
			if( (z - q) * (z - s) * (z - l) * (q - s) * (q - l) * (s - l) != 0
			    && z + q == s + l
				&& z + l > s + q
				&& z + s < q )
{
for(i = 1; i <= 4; i++)
      { 
	  sum = compare(z, q, s, l, i);
	  fout(z, q, s, l, sum);
	  cout << " " << sum <<endl;
      }
}
return 0;
}
