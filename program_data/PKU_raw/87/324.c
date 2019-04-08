int main()
{
    int a,b,c,d,e,i,f,m;
	for(i=0;;i++)
	{
	    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			break;
		}
		else{
			m=0;
			m=60-c+f;
			m=m+e*60+(60-b-1)*60;
			m=m+(d+11-a)*3600;
		}
		printf("%d\n",m);
	}


	return 0;
}