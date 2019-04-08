
int main()
{
    int a[300],i=1,max,sec=-1,j,t;
	for(j=1;j<300;j++)
		a[j]=-1;
	char c[300];
	for(;;)
		{
			scanf("%d%c",&a[i],&c[i]);
	        if(c[i]!=',') break;
		    i++;
	    }
	max=a[1];
	i=1;
	while(a[i]>=0)
	{
		if(a[i+1]>max){ t=max;max=a[i+1];sec=t;}
		else if(a[i+1]<max&&a[i+1]>sec) sec=a[i+1];
	    i++;
	}
	if(sec>=0) printf("%d",sec);
	else printf("No");
	return 0;

}