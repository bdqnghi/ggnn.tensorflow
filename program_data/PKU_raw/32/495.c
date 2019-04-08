
void printnum(int a[])
{
	int i;
	for(i = a[0];i > 0; --i) printf("%d", a[i]);
	printf("\n");
}

void getnum(int a[])
{
	int i;
	char str[100];

	for(i = 0;i <100;++ i) a[i] = 0;
	scanf("%s", str);
	a[0] = strlen(str);
	for(i = a[0]-1;i >= 0;-- i)
		a[ a[0]-i ] = str[i]-'0';
}

void getdif(int c[], int a[], int b[])
{
	int i;

	if(a[0] > b[0]) c[0] = a[0];
    else c[0] = b[0];

	c[1] = 0;
  for(i = 1;i <= c[0];++ i)
  { 
	if(c[i] + a[i] - b[i] < 0)
	{
		c[i+1] = -1;
		c[i] += a[i] - b[i] + 10;
	}
	else
	{
		c[i+1] = 0;
		c[i] += a[i] - b[i];
	}
  }
	while(c[ c[0] ] == 0) -- c[0];
  
}

void main()
{
	int a[100], b[100],c[100],n;

	scanf("%d",&n);
   for(;n != 0;-- n)
   {	getnum(a);
        getnum(b);
        getdif(c, a, b);
	   printnum(c);
   }
}
