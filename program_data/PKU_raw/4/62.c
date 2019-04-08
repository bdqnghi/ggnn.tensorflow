
int main(int argc, char* argv[])
{
	int a,b,*p,i,j,k;
	p=(int*)malloc(11000*sizeof(int));
	scanf("%d %d",&a,&b);
	for(i=0;i<a*b;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<b;i++)
	{
		k=i;
		j=0;
		while(k>=0&&j<a)
		{
			printf("%d\n",*(p+k+j*b));
			k--;
			j++;
		}
	}
	for(i=1;i<=a;i++)
	{
		k=i;
		j=0;
		while(k<a&&j<b)
		{
			printf("%d\n",*(p+b-1-j+k*b));
			j++;
			k++;
		}
	}
}
