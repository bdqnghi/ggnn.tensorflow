int main()
{
	int n,i,a=0,b=0,k,q,p;
	double sg[100],e,nan[100],nv[100];
	char xb[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
       scanf("%s %lf",xb[i],&sg[i]);
	   p=strlen(xb[i]);
	   if(p==4)
	   {
		   nan[a]=sg[i];
		   a=a+1;
	   }
	   if(p==6)
	   {
		   nv[b]=sg[i];
		   b=b+1;
	   }
	}
	for(k=1;k<a;k++)
	{
		for(q=0;q<a-k;q++)
		{
            if(nan[q]<nan[q+1])
			{
				e=nan[q+1];
				nan[q+1]=nan[q];
				nan[q]=e;
			}
		}
	}
	k=1;q=0;
    for(k=1;k<b;k++)
	{
		for(q=0;q<b-k;q++)
		{
            if(nv[q]<nv[q+1])
			{
				e=nv[q+1];
				nv[q+1]=nv[q];
				nv[q]=e;
			}
		}
	}
	for(int r=0;r<a;r++)
	{
	    printf("%.2lf ",nan[a-r-1]);
	}
	for(int t=0;t<b;t++)
	{
	    if(t<b-1)
		{
		  printf("%.2lf ",nv[t]);
		}
		else
		{
                    printf("%.2lf",nv[t]);
                   }
	}
	return 0;
}
