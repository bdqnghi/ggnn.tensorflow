
int main(int argc, char* argv[])
{
	int n,line,l1,l2,i,j,b;
	char s1[40],s2[40];
	scanf("%d",&n);
	line=80;
	scanf("%s",s1);
	l1=strlen(s1);
	for (i=1;i<=n;i++)
	{
		if (i!=n)
		{
			scanf("%s",s2);
		    l2=strlen(s2);
		}
		else l2=0;
		if (line-l1+b>0) 
		{
			line=line-l1;
			printf("%s",s1);
		}
		else
		{
			printf("\n%s",s1);
			line=80-l1;
		}
		b=0;
		if ((line-1-l2>=0)&&(i!=n))
		{
			printf(" ");
			line--;
			b=1;
		}
		for (j=0;j<l2;j++)
			s1[j]=s2[j];
		s1[l2]='\0';
		l1=l2;
//	    printf("*%d*",line);
	}
 	return 0;
}