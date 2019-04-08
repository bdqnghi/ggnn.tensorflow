int main()
{
    int i=0,j=0,k=0;
    int a[16];
    for(;;i++)
    {
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			printf("%d\n",k);
			i=-1;
			k=0;
		}

		if(a[0]==-1)
			break;

		for(j=0;j<i;j++)
			if(a[i]==a[j]*2||a[j]==a[i]*2)
				k++;
	}
}