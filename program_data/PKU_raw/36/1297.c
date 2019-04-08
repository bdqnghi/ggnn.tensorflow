
int main(int argc, char* argv[])
{
	char s1[100],s2[100];
	int i,j,c,d;
	char t;
	scanf ("%s %s",s1,s2);
    c=strlen(s1);
	d=strlen(s2);
	for (i=0;i<c;i++)
	{	for (j=c-1;j>=i+1;j--)
	{   if (s1[j]<s1[j-1]) 
	{   t=s1[j];
	    s1[j]=s1[j-1];
        s1[j-1]=t;
	}
	}
	}
	for (i=0;i<d;i++)
	{	for (j=d-1;j>=i+1;j--)
	{   if (s2[j]<s2[j-1]) 
	{   t=s2[j];
	    s2[j]=s2[j-1];
        s2[j-1]=t;
	}
	}
	}
    if (strcmp(s1,s2)==0) printf("YES");
	else printf("NO");
          



		return 0;

}


