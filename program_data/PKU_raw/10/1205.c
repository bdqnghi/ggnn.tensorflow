int k,a[26]={0},b[26]={0},max=0;

void num(int site,int height)
{
	int i,amount=0,h;
	if(site==k)
	{
		for(i=0;i<k;i++)
		{
			if(b[i]==1)
			{
				amount++;
			}				
		}
		if(max<amount) {max=amount;}
		
	}
	else
	{
		if(height<a[site])
		{
			num(site=site+1,height);
			site--;
		}//site++?????site??????????
		else
		{
			num(site=site+1,height);
			site--;
		    b[site]=1;h=height;
            height=a[site];
	    	num(site=site+1,height);
			site--;
			b[site]=0;height=h;
		}
			
	}
}

void main()
{
   int i;
   scanf("%d",&k);
   for(i=0;i<k;i++)
   {
	   scanf("%d",&a[i]);
   }
   num(0,30000);
printf("%d",max);

}