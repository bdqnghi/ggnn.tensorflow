int main()
{
	int m,n,i,g,s,b,q,w,judge=0,j,count,temp;
	scanf("%d%d", &m, &n);
    for(i=(m-1-(m%2));i<=n;i+=2)
	{
		w=i/10000;
		if(i>=10000 && i<20000) w=1;
		q=(i-10000*w)/1000;
		b=(i-10000*w-1000*q)/100;
		s=(i-10000*w-1000*q-100*b)/10;
		g=i-10000*w-1000*q-100*b-10*s;
		if(w==0 && q!=0) temp=1000*g+100*s+10*b+q;
		if(q==0 && b!=0 && w==0) temp=100*g+10*s+b;
		if(b==0 && s!=0 && q==0 && w==0) temp=10*g+s;
		if(w!=0) temp=10000*g+1000*s+100*b+10*q+w;
		if(temp==i)
		{
			count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0) count+=1;
			}
			if(count==2)
			{
				judge+=1;
				if(judge==1) printf("%d", i);
				else printf(",%d", i);
			}
		}
	}
	if(judge==0) printf("no");
	return 0;
}


	
