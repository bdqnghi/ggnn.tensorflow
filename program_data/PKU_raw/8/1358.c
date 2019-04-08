main()
{	int m,n;
	int input(int a,int b);
	scanf ("%d %d",&m,&n);
	input(m,n);
} 

int input(int a ,int b)
{
	int c[1000],d[1000];
	for (int i =0;i<a;i++)
	scanf("%d",&c[i]);
	for(int j=0;j<b;j++)
	scanf("%d",&d[j]);
	int sort(int e[],int s); 
	sort (c,a);
	printf(" ");
	sort (d,b); 
}
int sort(int e[],int s)
{
	int temp;
	for (int r=0;r<s-1;r++)
		for(int q=r+1;q<s;q++)
		{
			if (e[r]>e[q])
			{
			temp=e[r];
			e[r]=e[q];
			e[q]=temp;
			}
		} 
	for (int p=0;p <s-1;p++)
		printf ("%d ",e[p]);
		printf ("%d",e[s-1]);
		
}