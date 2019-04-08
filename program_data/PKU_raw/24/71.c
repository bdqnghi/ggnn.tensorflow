int main()
{
	char a[510],*p;
	int i,n,s1,s2,c,d,k,chang=0,duan=0;
	gets(a);
	p=a;
	for(i=0;*(p+i)!='\0';i++)
		if(*(p+i)==' '){s1=s2=i;break;}
	for(i=1;*(p+i)!='\0';i++)
		if(*(p+i-1)==' ')
		{
			c=i;
			for(k=i;;k++)
				if(*(p+k)==' '||*(p+k)=='\0')
				{
					d=k;
					break;
				}
				if(d-c>s1){s1=d-c;chang=c;}
		}
	for(i=1;*(p+i)!='\0';i++)
		if(*(p+i-1)==' ')
		{
			c=i;
			for(k=i;;k++)
				if(*(p+k)==' '||*(p+k)=='\0')
				{
					d=k;
					break;
				}
				if(d-c<s2){s2=d-c;duan=c;}
		}
	for(i=chang;i<chang+s1;i++)
		printf("%c",*(p+i));
	printf("\n");
	for(i=duan;i<duan+s2;i++)
		printf("%c",*(p+i));
	return 0;
}