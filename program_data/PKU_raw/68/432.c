void main() 
{
	int x,p,q,i,j,e,f,y;
	scanf("%d",&y);
	for(x=6;x<=y;x=x+2)
    {
		for(p=3;p<=x/2;p++)
		{
		i=sqrt(p);for(e=2;e<=i;e=e+1)
			if (p%e==0) break; 
			if (e>i)
			{
				q=x-p;j=sqrt(q);
				for(f=2;f<=j;f=f+1)
					if (q%f==0) break;
					if (f>j) {printf("%d=%d+%d\n",x,p,q);break;}
			}
		}
	}
}