int sort(int in[],int n)
{
	int i=0,t=0,j=0;
	for(i=0;i<n;i++)
	{
		if(in[i]>t)
		{
		t=in[i];
		j=i;
		}
	}
	return j;
}
int change(int in[],int n,int j)
{
	int a=0,i=0;
	a=in[j];
	in[j]=0;
	i=sort(in,n);
	if(a==in[i])
		return change(in,n,i);
	else
		return i;
}
void main()
{
	int i=0,n=0,a=0,in[300],j=0,s=0;
	char c;
while(scanf("%d,",&in[i],c)!=EOF)
{i++;n++;}
	if(n==1)
		printf("No");
	else 
	{
		j=sort(in,n);
	s=change(in,n,j);
		if(in[s]==0)
			printf("No");
		else
		printf("%d",in[s]);
	}
}
