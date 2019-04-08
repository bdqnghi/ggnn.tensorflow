int main()
{
	char A[250],B[250],a[250],b[250],p[250];
	//char A[250]="12",B[250]="12345";
	//char a[250],b[250],p[250];
	int i,j,len1,len2,m=0,c,max;
	scanf("%s %s",A,B);
	len1=strlen(A);
	len2=strlen(B);
	max=(len1>len2)?len1:len2;
    
	for(i=0;i<=max;i++)
		if(i<max-len1+1)
		a[i]='0';
		else
		a[i]=A[i-max+len1-1];
	for(i=0;i<=max;i++)
		if(i<max-len2+1)
			b[i]='0';
		else 
			b[i]=B[i-max+len2-1];
		for(i=max;i>=0;i--)
		{
            c=a[i]+b[i]-2*'0'+m;
		if(c>9)
		{
			c=c-10;
			m=1;
		}
		else m=0;
		p[i]=c+'0';
		}
     if((len1==1)&&(A[0]=='0')&&(B[0]=='0'))
		 printf("0\n");
	 else 
		 for(i=0;;i++)
			 if(p[i]!='0')
		{
             for(j=i;j<=max;j++)
			 printf("%c",p[j]);
			 printf("\n");
		     break;
		}
			 return 0;
}
