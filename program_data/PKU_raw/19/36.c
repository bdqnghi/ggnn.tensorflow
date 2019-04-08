char str[100],c1[100],c2[100];
int pd(int l)
{
    int i,j,k;
	char temp;
	k=0; 
	for (i=0;i<1;i)
	{

		if (str[l]!=c1[k]) return 0;
	    k++;
	    temp=str[l+1]; 
	    if ((temp==' ') || (temp=='\t') || (temp=='\r') || (temp=='\n'))

		{
		  
			if (k==(strlen(c1))) return 1;
		   else return 0;
		}
	    l++;
	}

}

int main()
{
    char temp;
	int i,j,n,k,m;
	gets(str); gets(c1); gets(c2);
    n=strlen(str); 
	for (i=0;i<n;i++)
	{
	    if (i>0) temp=str[i-1];
		if (i==0) temp=0;
        if ((i==0) || (temp==' ') || (temp=='\t') || (temp=='\r') || (temp=='\n'))
		{
		    k=pd(i); m=0;
			if (k==1) 
			{
			    printf("%s",c2); i=i+strlen(c1)-1;
			}
		
		    else printf ("%c",str[i]);
		}
		else
		{
		        printf ("%c",str[i]); 
		}
	}
	printf("\n");
}
