void f(char x[], char y[])
{
	int lenx,leny;
	int i,k,j;
	char p;
	lenx=strlen(x);
	leny=strlen(y);
	k=0;p=x[0];
	for(i=0;i<=lenx-1;i++)
	{
		if(x[i]>p){k=i;p=x[i];}
	}
	for(i=lenx-1;i>=k+1;i--)x[i+3]=x[i];
	for(i=k+1;i<=k+3;i++)x[i]=y[i-k-1];
	x[lenx+3]='\0';

}
void main()
{
	char x[20],y[4];
	while (scanf("%s %s",x,y)!=EOF)
	{

	f(x,y);
	printf("%s\n",x);}

}

