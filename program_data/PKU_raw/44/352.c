int reverse(int num);
void main()
{
	int a[6],i,b[6];
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{
		b[i]=reverse(a[i]);
	printf("%d\n",b[i]);
	}
}

int reverse(int num)
{
	int s=0,i,j,k=0,t;
	if(num<0)
	{
		num=0-num;
		k=1;
	}
	for(i=0;;i++)
	{
		t=pow(10,i);
		if((num%t)==num)
			break;
	}
	for(j=0;j<i;j++)
	{
		s+=(num%10)*pow(10,i-j-1);
		num=(num-num%10)/10;
	}
	if(k)
		return -s;
	else
		return s;
}
		
		


	
