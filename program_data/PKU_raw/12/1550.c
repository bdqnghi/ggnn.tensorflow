int main()
{
	int a[15],s,i,j,k,flag=1;
    while(flag)
	{
		s=0;
		for(i=0;i<16;i++)
		{                    /*????????????0*/
		scanf("%d",&a[i]);
	    k=i;  /*??k?????*/
		if(a[i]==-1)
		{
			flag=0;
			break;
		}
        if(a[i]==0)break;
		}
		if(flag)
		{
		for(i=0;i<k;i++)
			for(j=0;j<k;j++)
			{
				if(a[i]==2*a[j]) 
					s++;
			} /*?????????????*/
			printf("%d\n",s);
		}
	}
    return 0;
}