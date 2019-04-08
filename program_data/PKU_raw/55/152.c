
int main(int argc, char* argv[])
{
	char a[3],b[100],c[3],after[100],strtmp,after1[100];
	int before=0 ;
	int n1,n2,i,n,A[100],tmp,m;
	scanf ("%s %s %s",a,b,c);
    n1=atoi (a);
	n2=atoi (c); 
	n=strlen (b);
    //printf ("%d\n%d\n",n1,n2);
    for (i=0;i<n;i++)
	{
		if (b[i]>='a'&&b[i]<='z')
			b[i]=b[i]-32;
		if (b[i]>='0'&&b[i]<='9')
			A[i]=b[i]-48;
		if (b[i]>='A'&&b[i]<='Z')
			A[i]=b[i]-55;
		//printf ("%d\n",A[i]);
	}
	
    for (i=0;i<n;i++)
	{
         before = before*n1+A[i];
	}//printf ("%d\n",before);
	if (before==0)
	{after1[0]='0';after1[1]='\0';}
	else {
	for (i=0;i<100;i++)
	{
		if (before<1)
			break;
		else
		{  
            tmp=before%n2;
			before=before/n2;
			if(tmp>=10)
               strtmp=tmp+55;
			else
			   strtmp=tmp+48;
			after[i]=strtmp;
		}
	}
	after[i]='\0';
	//puts (after);
	m=strlen (after);
	//printf ("%d\n",m);
    for (i=0;i<m;i++)
	{
         after1[i]=after[m-i-1];
	}
	after1[i]='\0';}
	puts (after1);
	return 0;
}