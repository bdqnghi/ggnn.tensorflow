int main(int argc, char* argv[])
{
	int a,b,c,d,e,f,s;
	a=1;
	while(a>=1)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0)
		{
			s=(d+12)*60*60+e*60+f-a*60*60-b*60-c;
			printf("%d\n",s);
		}
		else
		{
			break;
		}
	}
    
	
	return 0;
}

