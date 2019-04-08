void main()
{
	char a[300],b[300],temp;
	int k=0,c[300]={0},semp,i,j,l;
	gets(a);
    for (i=0;a[i]!='\0';i++)
		if(a[i]>='a'&&a[i]<='z')break;
		else if(a[i+1]=='\0')printf("No");
	for (i=0;a[i]!='\0';i++)
		if(a[i]>='a'&&a[i]<='z')
		 {
			b[k]=a[i];
		    for(j=i+1;a[j]!='\0';j++)
			{
		
		     if(a[i]==a[j])
			 {a[j]=' ';c[k]=c[k]+1;}
			
			}
	        k=k+1;
		}
         
       for (i=0;i<k;i++)
		{
			l=i;
			for(j=i;j<k;j++)
				if(b[j]<b[l])
					l=j;
			if(i!=l)
			{temp=b[i];
			 b[i]=b[l];
			 b[l]=temp;
			 semp=c[i];
			 c[i]=c[l];
			 c[l]=semp;}
		}
		for(i=0;i<k;i++)
			printf("%c=%d\n",b[i],c[i]+1);

		 


}

 