int leap(int a)
{
	int t=1,i=0;
	if(a==2||a==3)  return t;
	else
	{
		for(i=2;i*i<=a;i++)
       	{  
			if(a%i==0)
		   { 
			t=0;
			break;
		    }
		}
	}
	return t;
}
int main()
{
	int i,m;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		if(leap(i)&&leap(m-i))
		{
			printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}