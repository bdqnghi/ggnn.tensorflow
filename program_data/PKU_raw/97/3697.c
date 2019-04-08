int main()
{
    int n, a[6], u, i, s, j;
	scanf("%d", &n); 
	s=n;
	a[1]=100;a[2]=50;a[3]=20;a[4]=10;a[5]=5;a[6]=1;

	for(i=1;i<7;i++)
	{

	j=0;
	 while( s>=a[i] ){
		 j=j+1;
         s = s - a[i];
	 }
     printf("%d\n", j);
	}
	return 0;
}