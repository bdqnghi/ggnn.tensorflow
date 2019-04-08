


int main()
{
	int n,i,a=0,b=0,c=0,d=0,sum=0,y;
	double q=0,w=0,e=0,r=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&y);
		if((y>=1)&&(y<=18))
		{
			a+=1;
		}
		else if((y>=19)&&(y<=35))
		{
			b+=1;
		}
		else if((y>=36)&&(y<=60))
		{
			c+=1;
		}
		else if(y>60)
		{
			d+=1;
		}
	   sum=a+b+c+d;
	   q=(double)a/sum*100;
	   w=(double)b/sum*100;
	   e=(double)c/sum*100;
	   r=(double)d/sum*100;	
	}
	
	
	printf("1-18: %.2lf%%\n",q);
    printf("19-35: %.2lf%%\n",w);
    printf("36-60: %.2lf%%\n",e);
    printf("60??: %.2lf%%\n",r);
	return 0;




}
