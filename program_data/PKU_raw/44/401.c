int reverse(int num)
{ int i,j,a[100],m=0,d;
    d=1;
    if(num<0)
 	{ 
	    num=-num;
        d=0;
    }
	for(i=0;1;i++)
	{	
		if(num<10)
	    	break;
		a[i]=num%10;
		num=num/10;
	}
	for(j=0;j<i;j++)
	{
		m+=a[j]*(pow(10,(i-j)));
	}
	m+=num;
	if(d==0)
		return -m;
	else 
		return m;
}
int main()
{
 	int i,n,result;
	for(i=0;i<6;i++)
	{	
		scanf("%d",&n);
	    result=reverse(n);
        if(i<5)
		printf("%d\n",result);
        else
        printf("%d",result);
	}
	return 0;
}