
int main(int argc, char* argv[])
{

	int x,s,c,y,e=0,t,q,n=0,j,b[1000],i,a[1000],num;
	num=1;
	scanf ("%d %d",&x,&y); s=x; c=y;
	if(x==1 || y==1)
		printf ("1\n");
	else{
	do 
	{
		x=x/2;
		n++;
	}
	while (x!=1);
	
	do 
	{	
		e++;
		y=y/2;
	}
	while (y!=1);
	
	e++;
	n++;
	
	
	for (i=1;i<=n;i++)
	{
		a[i]=s;
		s=s/2;
	}
	
	for (j=1;j<=e;j++)
	{
		b[j]=c;
		c=c/2;
	}

	for (t=1;t<=n;t++)
	{	for (q=1;q<=e;q++)
		{
		if (a[t]==b[q]){
				printf ("%d\n",b[q]);
			num =0;
				break;
		}	
		}
		if(num==0)
			break;

       }
	}
		return 0;
}