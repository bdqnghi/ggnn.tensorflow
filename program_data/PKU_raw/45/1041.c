int main()
{
	char s1[50],s2[50];
	int i,n,j,m=-1;
	scanf("%s %s",s1,s2);
	
	for(i=0;s2[i]!='\0';i++)
{
		m++;
		if(s2[i]==s1[0])
		{
			for(j=0;s1[j]!='\0';j++)
            {
			    if(s2[i+j]!=s1[j])
                {n=0;break;}
		    	n=1;
		    }
		}
		if(n==1)break;
}
	printf("%d",m);	
}