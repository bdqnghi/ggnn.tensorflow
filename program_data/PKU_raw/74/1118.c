
int main()
{
	int m,n,k,p,q,r,s,t,h,i,j;
	scanf("%d%d",&m,&n);
	h=0;
	for(s=m;s<=n;s++)
	{
		p=0;
		q=s;
		while(q!=0)
		{
			p=p*10+q%10;
			q=q/10;
		}
		if(p!=s) 
		{t=0;continue;}
		else t=1;
		for(j=2;j<s;j++)
		{
			if(s%j==0)
			{
				r=0; break;
			}
			r=1;
		}
		if(r==0) continue;
		if(r==1&&t==1) h=1+h;
		else h=h;
		printf("%d",s); break;
	}
	for(k=s+1;k<=n;k++)
	{
		p=0;
		q=k;
		while(q!=0)
		{
			p=p*10+q%10;
			q=q/10;
		}
		if(p!=k) {
			t=0;continue;
		}
		else t=1;
		for(j=2;j<k;j++)
		{
			if(k%j==0)
			{
				r=0; break;
			}
			r=1;
		}
		if(r==0) continue;
		if(r==1&&t==1) h=1+h;
		printf(",%d",k);
	}
	if(h==0)
		printf("no");
	
}

	