int main(){
int n,i,m,j,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
       scanf("%d",&m);
	   if( m == 1 || m == 2 )
	   {
		   printf("%d\n",1);
		   continue;
	   }
	   int a = 1;
	   int b = 1;
	   for( j = 3; j <= m; j++ )
	   {
		   d = a + b;
		   a = b;
		   b = d;
	   }
	   printf("%d\n", d );
	}
	return 0;

}