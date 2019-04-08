int main()
{
	int w,a[100]={0},i,k,sum;
	scanf("%d",&w);
	if(w==1||w==2||w==3||w==4||w==5)a[0]=6-w;
	else if(w==6)a[0]=7;
	else if(w==7)a[0]=6;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	a[1]=0;
	for(i=1;a[i-1]<=365;i++)
	{
		a[i]=a[i-1]+7;
		sum=13;
		for(k=0;k<=11;k++)
		{
			sum+=m[k];
			if(a[i]==sum)
				printf("%d\n",k+1);
		}
	}
	return 0;
}