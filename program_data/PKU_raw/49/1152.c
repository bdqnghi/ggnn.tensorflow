void print(int n1,int n2);
char s[500],z[500][250];
int main()
{

	gets(s);
	int h,a,b,c,d;
	h=strlen(s);
	for(a=0;a<h-1;a++)
	{	if(s[a]==s[a+1])
		{	z[a][a+1]=1;
	        print(a,a+1);
			 printf("\n");
		}
	    z[a][a]=1;
    }
	z[h-1][h-1]=1;
	for(d=2;d<h;d++)
		for(b=0;b<h-d;b++)
		{	c=b+d;
		if((z[b+1][c-1]==1)&&(s[b]==s[c]))
		{  z[b][c]=1;
		   print(b,c);
		   printf("\n");
		}
		}
    return 0;

}
void print(int n1,int n2)
{
	while(n1<=n2)
	{	printf("%c",s[n1]);
		n1++;
	}
}