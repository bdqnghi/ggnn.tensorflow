
int main()
{
	int n,a=0,x,y,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		switch(x-y)
		{
			case -1:
			case 2:  a+=1;break;
			case 1:
			case -2: a-=1;break;
		}
	}	
	if(a>0) printf("A");
	else if(a<0) printf("B");
	else printf("Tie");
	return 0;
}