int main()
{
    int m,n,i,j,k,l,max,s,f;
	float a,b;
	char ch1[600],ch2[600];
	
    scanf("%f",&a);
	scanf("%s",ch1);
	scanf("%s",ch2);
	m=strlen(ch1);
	n=strlen(ch2);

	f=1;
	if(m!=n)
		f=0;
	max=0;

	if(f)
		for(i=0;i<m;i++)
		{
		    if( ( (ch1[i]=='A')||(ch1[i]=='T')||(ch1[i]=='C')||(ch1[i]=='G') )&&((ch2[i]=='A')||(ch2[i]=='T')||(ch2[i]=='C')||(ch2[i]=='G')) )
			{
			    if(ch1[i]==ch2[i])
					max++;
			}
			else
			{
			    f=0;
				break;
			}
		}

	if(f)
	{
	    b=(float)max/n;
		if(b>a)
			printf("yes");
	    else
			printf("no");
	}
	else
	    printf("error");

	return 0;
}