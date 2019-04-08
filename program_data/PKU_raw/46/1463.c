int main()
{
	int i,h,l,j,hb=0,lb=0,lans=0,hs,ls,n=0,ans[10000],a[100][100],z=0;
	scanf("%d%d",&h,&l);
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
		hs=h-1;
        ls=l-1;
		while(1)
		{
			for(i=lb;i<=ls;i++){
			ans[lans++]=a[hb][i];
			n++;
				if(n==h*l)
				{z=1;
					break;
				}
		}
			if(z==1)break;
			for(i=hb+1;i<=hs;i++){ 
			ans[lans++]=a[i][ls];
			n++;
				if(n==h*l)
				{z=1;
					break;
				}
		}
			if(z==1)break;
		    for(i=ls-1;i>=lb;i--){
			ans[lans++]=a[hs][i];
			n++;
				if(n==h*l)
				{z=1;
				break;
				}
		}
			if(z==1)break;
	     	for(i=hs-1;i>=hb+1;i--){
			ans[lans++]=a[i][lb];
			n++;
				if(n==h*l)
				{z=1;
				break;
				}
		}
			if(z==1)break;
		hb++;
		hs--;
		lb++;
		ls--;
		}
		for(i=0;i<lans;i++)
			printf("%d\n",ans[i]);


	

				return 0;
}

