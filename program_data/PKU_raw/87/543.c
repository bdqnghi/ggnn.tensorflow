int main()
{
	int i,a,b,c,d,e,f,min=0,s=0;
	for(i=0;i<10000;i++)
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
			break;
		min=(12+d-a-1)*60+(60-b+e);
		s=60*min+f-c;
		printf("%d\n",s);
	}
		
	
	return 0;
}