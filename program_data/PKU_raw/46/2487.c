int main()
{
	int n, sz[number][number], j, k, i, l, mc, a, b, go;
	scanf("%d%d", &a, &b);
    for(go=0;go<a;go++)
	{
		for(i=0;i<b;i++)
		{
			scanf("%d", &(sz[go][i]));
		}
	}
	for(i=0;i<a;i++)
	{
		if(a<b&&a%2==0&&i*2+2>=a)
		{
			for(l=i;l<=b-i-1;l++)
    		    printf("%d\n", sz[i][l]);
 	    	for(l=i+1;l<=a-i-1;l++)
    		    printf("%d\n", sz[l][b-1-i]);
    		for(l=b-i-2;l>=i;l--)
	    	    printf("%d\n", sz[a-1-i][l]);
			break;
		}
		if(a<b&&a%2!=0&&i*2+2>=a)
		{
	        for(l=i;l<=b-i-1;l++)
	    	    printf("%d\n", sz[i][l]);
			break;
		}
		if(a>b&&b%2!=0&&i*2+2>=b)
		{
			for(l=i;l<=b-i-1;l++)
	    	    printf("%d\n", sz[i][l]);
    		for(l=i+1;l<=a-i-1;l++)
    		    printf("%d\n", sz[l][b-1-i]);
			break;
		}
        for(l=i;l<=b-i-1;l++)
		    printf("%d\n", sz[i][l]);
		for(l=i+1;l<=a-i-1;l++)
		    printf("%d\n", sz[l][b-1-i]);
		for(l=b-i-2;l>=i;l--)
		    printf("%d\n", sz[a-1-i][l]);
		for(l=a-i-2;l>i;l--)
		    printf("%d\n", sz[l][i]);
	}
	return 0;
} 