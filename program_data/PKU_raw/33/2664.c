int main()
{
	int i,n,p;
	char a[260];
	scanf("%d",&n);
	scanf("\n");
	for(i=0;i<n;i++)
	{
		p=0;
		do
		{
	    scanf("%c",&a[p]);
		switch(a[p])
		{
		    case 'A': a[p] = 'T'; break;
			case 'T': a[p] = 'A'; break;
			case 'G': a[p] = 'C'; break;
			case 'C': a[p] = 'G'; break;
		}
	    printf("%c",a[p]);
		p=p+1;
		}while(a[p-1]!='\n');
	}
	return 0;
}


