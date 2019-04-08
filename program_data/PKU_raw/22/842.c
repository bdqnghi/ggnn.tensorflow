int main()
{
	int i=0,j=0,k=0,a[300]={0},t=0;
	char b;
	for(;;)
	{
	    for(;;)
	    {
			b=getchar();
			if(b==','||b=='\n') break;
			a[i]=a[i]*10+(int)(b-'0');
		}
		if(b=='\n') break;
		i++;
	}
	if(i==0) {printf("No\n");exit(0);}
	for(j=0;j<=i;j++)
		if(a[j]==a[k]) t++;
	if(t==i+1) {printf("No\n");exit(0);}
	for(j=0;j<=i;j++)
		if(a[j]>a[k]) k=j;
	t=a[k];
	for(j=0;j<=i;j++)
		if(a[j]==t) a[j]=0;
	for(j=0;j<=i;j++)
		if(a[j]>a[k]) k=j;
	printf("%d\n",a[k]);
}
	