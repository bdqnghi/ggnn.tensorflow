void main()
{
	char str1[100];
	char str2[100];
	int i,j,k,l,m,n;
	gets(str1);
	l=strlen(str1);
	m=0;
	n=-1;
	j=l-1;
 loop:{
		  for(i=n+1;i<l;i++)
		  {
			  if(str1[i]!=' ')break;
		  }
		  m=i;
		  for(i=m+1;i<=l;i++)
		  {
			  if(str1[i]==' ')break;
			  else if(str1[i]=='\0')break;
		  }
		  n=i-1;
		  for(k=n;k>=m;k--)
		  {
			  str2[j]=str1[k];
			  j=j-1;
		  }
		  if(i!=l)
		{
			str2[j]=' ';
		    j=j-1;
		    goto loop;
		}
		else 
		{
			str2[l]='\0';
			printf("%s",str2);
		}
	  }
}