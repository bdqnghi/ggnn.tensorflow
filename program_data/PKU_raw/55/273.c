int main()
{
	char s3[100],s1[100],s2[100],s[100];
	long q=0,a,b;
	int i,p=0,m,t;
	scanf ("%ld %s %ld",&a,s3,&b);
	t=strlen (s3);
	for (i=t-1;i>=0;i--)
	{
		s[t-1-i]=s3[i];
		s[t-i]='\0';
	}
	for (i=0;s[i]!='\0';i++)
	{
        if (s[i]>='a'&&s[i]<='z')
        {
            q=q+(s[i]-'a'+10)*pow(a,i);
        }
        else if (s[i]>='A'&&s[i]<='Z')
        {
            q=q+(s[i]-'A'+10)*pow(a,i);
        }
        else if (s[i]>='0'&&s[i]<='9')
		{
            q=q+(s[i]-'0')*pow(a,i);
		}
     }
        if (q==0)
        {
            printf ("0");
        }
        else if (q!=0)
         {
           for (i=0;q!=0;i++)
         {
             p=q%b;
			 if (p>=10)
			 {
				s1[i]=p+55;
			 }
			 else 
			 {
				s1[i] =p+48;
			 }
             s1[i+1]='\0';
             q=q/b;
		  }
		   m=strlen(s1);
		   for (i=m-1;i>=0;i--)
		   {
              s2[m-1-i]=s1[i];
			  s2[m-i]='\0';
		   }
            printf ("%s",s2);
           }
               
               return 0;
}
