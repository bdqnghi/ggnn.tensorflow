struct pa
{
	char str[10];
	int y;
}pa[101];
int main()
{
	int n;
	int i,j,k=0,t=0;
	int a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%s%d",pa[i].str,&pa[i].y);
	
	for(i=0;i<n;i++)
	{
		if(pa[i].y>=60)
		{
			a[k]=i;
			k++;
		}
        else
		{
			b[t]=i;
			t++;
		}
	}

     for(i=1;i<k;i++)
		 for(j=0;j<k-i;j++)
			 if(pa[a[j]].y<pa[a[j+1]].y)
			 {
				 pa[100]=pa[a[j]];
				 pa[a[j]]=pa[a[j+1]];
				 pa[a[j+1]]=pa[100];
			 }

     for(i=0;i<k;i++)
		 printf("%s\n",pa[a[i]].str);
	 for(i=0;i<t;i++)
		 printf("%s\n",pa[b[i]].str);
}
