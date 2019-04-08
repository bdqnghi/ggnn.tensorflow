void main()
{
	char a[50],b[50];
	int i,j,k=0,l,x,y;
	scanf("%s %s",a,b);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<=(y-x);i++)
		if(b[i]=a[0])
		{   l=1;
		    k=i;
			for(j=i+1;l<x;j++,l++)
				if(a[l]!=b[j])
				{
					k=0;
					break;
				}
            if(l==x)
			{
				printf("%d",k);
				break;
			}
		}
}