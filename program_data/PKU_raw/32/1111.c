/* Note:Your choice is C IDE */
main()
{
	void minus(char a[999],char b[999]);
	char a[999],b[999];
	int n,i,z;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%s",a,b);
		minus(a,b);
	}
}
void minus(char a[999],char b[999])
{
	int x,y,w;
	x=strlen(a);
	y=strlen(b);	
	for(w=x-1;w>=x-y;w--)
	{
		    if(a[w]>=b[w-x+y]) 
		    {
		    	a[w]=a[w]-b[w-x+y];
		    }
		    else 
		    {
			    a[w-1]--;
			    a[w]=a[w]+10-b[w-x+y];
		    }
		
	}
    for(w=0;w<=x-1;w++)
    {
    	if(a[w]==0) continue;
    	else break;
    }
    for(w=w;w<=x-y-1;w++)
    printf("%c",a[w]);
    for(w=x-y;w<=x-1;w++)
    printf("%d",a[w]);
    printf("\n");
}