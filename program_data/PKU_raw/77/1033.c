void main()
{
	char a[100];
	int x,i,j,p;
	scanf("%s",a);
	x=strlen(a);
	p=0;
	while(p<x/2)
	{
		i=0;
		while(a[i]!=a[x-1]) {i++;j=i;} 
		j--;
		while(a[j]!=a[0]) {j--;}
		printf("%d %d\n",j,i);
		a[i]=a[j]=0;
	    p++;
	}
}


	

