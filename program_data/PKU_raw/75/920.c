void main()
{
	int a,b,c=0,d=0,e=0,f,g,h,i,j,r[2][10000],t[1001]={0};
	char s1[20000],s2[20000];
	scanf("%s",&s1);a=strlen(s1);
	scanf("%s",&s2);j=strlen(s2);
	r[0][0]=r[1][0]=0;
	for(b=0;b<=a;b++)
	{
		if(s1[b]==','||s1[b]=='\0')
		{c++;d=0;r[0][c]=0;}
		else
		{r[0][c]=r[0][c]*10+s1[b]-'0';}
	}
	for(b=0;b<=j;b++)
	{
		if(s2[b]==','||s2[b]=='\0')
		{e++;d=0;r[1][e]=0;}
		else
		{r[1][e]=r[1][e]*10+s2[b]-'0';}
	}
	for(f=0;f<e;f++)
	{
		for(g=r[0][f];g<r[1][f];g++)
		{	t[g]++;}
	}
	h=0;
	for(i=0;i<1000;i++)
	{if(h<t[i])h=t[i];}
	printf("%d %d",e,h);
}