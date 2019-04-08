int main()
{
	int reverse(int num);
	int a[6][1];
	int i,l=0;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i][0]);
		l=reverse(a[i][0]);
	    printf("%d\n",l);
	}

	return 0;
}




	int reverse(int num)
	{   int a=0,b=0,c=0,p=0,q=0,d=0,e=0,k=0;
		k=abs(num);
        e=k/10000;
        a=(k/1000)%10;
		b=k%10;
		c=(k/10)%10;
		d=(k/100)%10;
        if(e!=0)
        p=b*10000+c*1000+d*100+a*10+e;
	    if(e==0&&a!=0)
	    p=b*1000+c*100+d*10+a;
	    if(e==0&&a==0&&d!=0)
	    p=b*100+c*10+d;
	    if(e==0&&a==0&&d==0&&c!=0)
	    p=b*10+c;
	    if(e==0&&a==0&&d==0&&c==0)
	    p=b;
    
    if(num>0)
       q=p;
	if(num<0)
		q=-p;
	return q;
	}