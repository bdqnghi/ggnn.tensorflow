void main()
{
    int i,j,m=1,t,a,b;
	char str1[40],str2[40];
	scanf("%s%s",str1,str2);
	a=strlen(str1);
	b=strlen(str2);
	if(a!=b)printf("NO");
	else
    {for(j=0;j<a-1;j++)
		for(i=0;i<a-1-j;i++)
			if(str1[i]<str1[i+1])
			{
				t=str1[i];
				str1[i]=str1[i+1];
				str1[i+1]=t;
			}
     for(j=0;j<a-1;j++)
		for(i=0;i<a-1-j;i++)
			if(str2[i]<str2[i+1])
			{
				t=str2[i];
				str2[i]=str2[i+1];
				str2[i+1]=t;
			}
		
		for(i=0;i<=a-1;i++)
		
			{
				if(str1[i]==str2[i])m=m*1;
			    else m=m*0;
			}
     if(m=1)printf("YES");
	 else printf("NO");
	}
}
