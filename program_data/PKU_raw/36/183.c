void main()
{
	char a[100],b[100],c;int i,j,z;
	scanf("%s %s",a,b);
	for(j=strlen(a)-1;j>=1;j=j-1)
	{
		for(i=0;i<=j-1;i=i+1)
		{ 
			if(a[i]>a[i+1])
			{
			  c=a[i];a[i]=a[i+1];a[i+1]=c;
			}
            if(b[i]>b[i+1])
			{ 
			  c=b[i];b[i]=b[i+1];b[i+1]=c;
			}
		}
	}
	for(i=0;i<=strlen(a)-1;i=i+1)
	{
		if(a[i]==b[i])z=1;
		else 
		{
			z=0;break;
		}
	}
          if(strlen(a)!=strlen(b))printf("NO");
	else if(z==1)printf("YES");
	    else printf("NO");
}
