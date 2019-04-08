void main()
{
	char a[10000],*p=a,n,i,*max,*min,x=0,y=100,word=0;
	gets(a);
	max=a;min=a;
	for(i=0,n=strlen(a),p=a;i<n;i++)
	{
		word++;	
		if(*(p+i)==' ')
		{
			word--;
			if(word>x){x=word;max=p+i-x;}
			if(word<y){y=word;min=p+i-y;} /*???????*/
			word=0;
		}
		if(i==n-1)
		{
			if(word>x){x=word;max=p+i-x+1;}
			if(word<y){y=word;min=p+i-y+1;}
		}
	}
	for(p=max;p<max+x;p++)
	{
		printf("%c",*p);
		if(p==max+x-1)printf("\n");
	}
	for(p=min;p<min+y;p++)
		printf("%c",*p);
}