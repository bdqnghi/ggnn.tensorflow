int main(int argc, char* argv[])
{
	int w,d=12,i;
	scanf("%d",&w);
	int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<13;i++)
	{
		d+=p[i];
		if(d%7+w==5||d%7+w==12)
			printf("%d\n",i+1);
	}
}


