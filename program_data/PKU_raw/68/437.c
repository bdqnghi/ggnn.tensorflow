void main()
{
	int n,i,num,s,j,_s;
	scanf("%d",&n);
	for(num=6;num<=n;num+=2)
		for(s=3;s<=num/2+1;s+=2)
		{for(i=3;i<=sqrt(s);i+=2)
				if(s%i==0)
					break;
			if(i>sqrt(s)&&s%2!=0)
			{_s=num-s;
			for(i=3;i<=sqrt(_s);i+=2)
				if(_s%i==0)
					break;
				if(i>sqrt(_s)&&s%2!=0)
				{printf("%d=%d+%d\n",num,s,_s);break;}}}
}