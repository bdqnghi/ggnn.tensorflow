int main()
{
    int n,i;
	
	float c,d;
	int a,b;
   
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	c=(float)b/a;
	scanf("%d%d",&a,&b);
		d=(float)b/a;
		if(d-c>0.05) printf("\nbetter");
		else if (c-d>0.05) printf("\nworse");
		else printf("\nsame");

    for (i=2;i<n;i++){
		scanf("%d%d",&a,&b);
		d=(float)b/a;
		if(d-c>0.05) printf("\nbetter");
		else if (c-d>0.05) printf("\nworse");
		else printf("\nsame");

		}


	return 0;
}


