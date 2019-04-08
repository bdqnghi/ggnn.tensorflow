int main()
{
	int n,i,j,k,lena,lenb,x,y,tag=1;
	char a[1000]={0},b[1000]={0},c[1000]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
        scanf("%s",b);
	    lena=strlen(a);
		lenb=strlen(b);
		k=lenb;

        for(j=lena,k=lenb;j>=0;j--,k--)
		{

			if(k<0)
			{
				c[j]=a[j];



			}
			else
			{
			  if(a[j]>=b[k])
			  {
				c[j]=a[j]-b[k]+'0';

			  }
			  else
			  {
				a[j]=a[j]+10;
				a[j-1]--;
				c[j]=a[j]-b[k]+'0';
			  }
			}
		}
		for(x=0;x<lena;x++)
		{
			if(c[x]!=0)
			{

				for(y=x;y<lena;y++)
					printf("%c",c[y]);
				printf("\n");
			;
				tag=0;
				break;
			}


		}
		if(tag==1)
			printf("0\n");
	}
}
