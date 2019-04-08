void main()
{
	int n,m,i,j,l1,l2,k,p,o=0,a[200],carry=0,jump;
    char str1[101],str2[101],str3[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%s%s",str1,str2);

		l1=strlen(str1);
		l2=strlen(str2);

        str1[101]='\0';
		jump=101-l1;
        for(m=l1-1;m>=0;m--)
		str1[m+jump]=str1[m];
		for(m=0;m<jump;m++)
			str1[m]='0';
		str2[101]='\0';
		jump=101-l2;
		for(m=l2-1;m>=0;m--)
			str2[m+jump]=str2[m];
		for(m=0;m<jump;m++)
			str2[m]='0';

		for(j=100;j>=100-l1;j--)
		{ 
			if(str1[j]>=(carry+str2[j]))
			{
				str3[j]=str1[j]-(str2[j]+carry)+48;
				carry=0;
			}
			else
			{
                str3[j]=str1[j]+10-(str2[j]+carry)+48;
                carry=1;
			}
		}

       for(k=101-l1;k<=100;k++)
	   {
	       printf("%c",str3[k]);

	   }
	   printf("\n");
	}
}