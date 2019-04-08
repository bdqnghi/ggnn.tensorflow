main()
{
    int n,tian[1050],qi[1050],i,j,t,h,vic=0;
    scanf("%d",&n);
    while (n!=0)
    {
        int head1=0,head2=0,end1=n-1,end2=n-1;
        for (i=0;i<n;i++) scanf("%d",&tian[i]);
        for (i=0;i<n;i++) scanf("%d",&qi[i]);
        for(i=0;i<n-1;i++)
	    {
		   for(j=0;j<n-1-i;j++)
		   {
			if(tian[j]<tian[j+1])
			{
				t=tian[j];
				tian[j]=tian[j+1];
				tian[j+1]=t;
			}
			if(qi[j]<qi[j+1])
			{
				h=qi[j];
				qi[j]=qi[j+1];
				qi[j+1]=h;
			}
           }
	    }
        for (i=0;i<n;i++)
        {
            if(tian[head1]>qi[head2])
            {
                vic++;
                head1++;
                head2++;
            }
            else
            if(tian[end1]>qi[end2])
                {
                    vic++;
                    end1--;
                    end2--;
                }
            else
                if (tian[head1]<=qi[head2])
                {
                    if (tian[end1]<qi[head2])
                    {
                        vic--;
                        end1--;
                        head2++;
                    }
                    else
                    {
                        end1--;
                        head2++;
                    }
                }
                else
                if(tian[end1]<=qi[end2])
                {
                    vic--;
                    end1--;
                    head2++;
                }
        }
        printf("%d\n",200*vic);
        vic=0;
        scanf("%d",&n);
    }
}
