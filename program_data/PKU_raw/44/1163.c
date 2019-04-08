int reverse(int num)/*?????????*/
{
	int ws=0/*??*/,new_num=0,i,a=num;
int ten=1;
		while (a>0)
		{
			ws++;
			a=a/10;
		}
	for(i=0;i<ws;i++)
		ten=ten*10;
	i=1;
	ten=ten/10;
	while(ten>0)
	{
		new_num=num/ten*i+new_num;
		num=num%ten;
		i=i*10;
		ten=ten/10;
	}
	return(new_num);
}

void main()
{
	int a[6]={0},i,j;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		if(a[i]<0)  printf("-%d\n",reverse(-a[i]));
		else if(a[i]>0) printf("%d\n",reverse(a[i]));
		else printf("0\n");
	}
}


