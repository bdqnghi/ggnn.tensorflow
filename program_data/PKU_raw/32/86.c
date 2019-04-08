
void main()
{
	int n,i,j,xa,xb;
	char sa[100],sb[100],str[20][100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
	
		scanf("%s",sa);scanf("%s",sb);
		xa=strlen(sa);xb=strlen(sb);
		xb=xa-xb;
			for(j=xa-1;j>=xb;j--)
		{
			if (sa[j]>=sb[j-xb] )
				sa[j]=sa[j]-sb[j-xb]+48;
		   else if (sa[j]<sb[j-xb] )
			{
				sa[j]=sa[j]-sb[j-xb]+48+10;
				sa[j-1]=sa[j-1]-1;
			}
		}
	    for(j=0;j<xa;j++)
			str[i][j]=sa[j];
		str[i][xa]='\0';
	}
	
	for(i=0;i<n;i++)
		printf("%s\n",str[i]);
}
