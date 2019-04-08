int main()
{
	int len,max,n,p;
	int i1,i2,i3,i4,i5,i6,i7;
	int a[510][5],num[510];
	char str[510];
	scanf("%d",&n);
	scanf("%s",str);
	len=strlen(str);
	memset(num,0,sizeof(num));
	memset(a,0,sizeof(a));
	for(i1=0;i1<=len-n;i1++)
	{
		for(i2=0;i2<=n-1;i2++)
		{
			a[i1][i2]=str[i1+i2];
		}
	}
	for(i3=0;i3<=len-n;i3++)
	{
		for(i4=i3+1;i4<=len-n;i4++)
		{
			if((a[i3][0]==a[i4][0])&&(a[i3][1]==a[i4][1])&&(a[i3][2]==a[i4][2])&&(a[i3][3]==a[i4][3])&&(a[i3][4]==a[i4][4]))
			num[i3]++;	
		}
	}
	max=num[0];
	for(i5=1;i5<=len-n;i5++)
	{
		if(num[i5]>max)
		  max=num[i5];
	}
	if(max==0)
		printf("NO");
	else
	  {p=max+1;
printf("%d\n",p);
		for(i6=0;i6<=len-n;i6++)
	    {
		 if(num[i6]==max)
		 {
			 for(i7=0;i7<=n-1;i7++)
			 {
				 if(i7==n-1)
					 printf("%c\n",str[i6+i7]);
				 else
				     printf("%c",str[i6+i7]);
			 }
         }	
	    }
	  }
	
}

