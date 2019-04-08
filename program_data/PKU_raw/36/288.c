void main()
{
    char str1[100],str2[100];
    int i,j,a,b,l1,l2;
    scanf("%s",str1);
    scanf("%s",str2);
    l1=strlen(str1);l2=strlen(str2);
    a=1;
    if(l1!=l2) a=0;
    else
    {
    	for (i=0;i<l1;i++)
		{
			b=0;
			for (j=0;j<l1;j++)
				if (str2[j]==str1[i])
				{
					b=1;
					str2[j]=' ';
					break;
				}
			if (b==0) a=0;
		}
    }
    if(a==1) printf("YES");
    else printf("NO");
}