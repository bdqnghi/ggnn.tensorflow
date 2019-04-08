int main()
{
	int a[4],m,i,j,b;
	scanf("%d",&m);
	for(i=3,b=0,j=1;j<=3;j++)
	{
		a[j]=m%i;
		if(a[j]==0)
		b=b+i;
		i=i+2;
	}
	switch(b)
	{
	case 0:printf("n");break;
	case 3:printf("3");break;
	case 5:printf("5");break;
	case 7:printf("7");break;
	case 8:printf("3 5");break;
	case 10:printf("3 7");break;
	case 12:printf("5 7");break;
	case 15:printf("3 5 7");break;
	}
	return 0;
}