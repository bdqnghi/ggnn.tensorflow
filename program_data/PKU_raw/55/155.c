void main()
{
	int a1,a2,i,len,j;
    unsigned long t=0,n[40],k;
	char num1[40];
	scanf("%d%s%d",&a1,&num1,&a2);
	len=strlen(num1);
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		if(num1[i]>='A'&&num1[i]<='Z')n[i]=10+num1[i]-'A';
		if(num1[i]>='a'&&num1[i]<='z')n[i]=10+num1[i]-'a';
		if(num1[i]>='0'&&num1[i]<='9')n[i]=1+num1[i]-'1';
		t=t+n[i]*(int)pow(a1,j);
	}
	for(i=0;;i++)
	{
		k=t/(int)pow(a2,i);
		if(k<a2)/* ! */
		break;
	}
      for(;i>=0;i--)
	  {
		n[i]=t/(int)pow(a2,i);
		t=t-(int)pow(a2,i)*n[i];
			if(n[i]>=0&&n[i]<=9)
				printf("%c",n[i]+48);
			if(n[i]>=10&&n[i]<=35)
				printf("%c",n[i]+55);	
	  }
}
