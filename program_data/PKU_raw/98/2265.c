int main()
{
	struct word{
		char w[41];
		int l;
	}a[1000];
	int n,i,temp=-1,t,p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i].w);
		a[i].l=strlen(a[i].w)+1;
	}
	do{
		temp=-1;
	    for(i=p;i<n;i++)
		{
		    temp+=a[i].l;
		    if(temp>80)
			{
			    t=i;
			    break;
			}
		}
		if(temp>80)
		{
	        printf("%s",a[p].w);
	        for(i=p+1;i<t;i++)
			{
		        printf(" %s",a[i].w);
			}
		    p=t;
	        printf("\n");
		}
	}while(temp>80);
	printf("%s",a[p].w);
	for(i=p+1;i<n;i++)
	{
		printf(" %s",a[i].w);
	}
	printf("\n");
	return 0;
}