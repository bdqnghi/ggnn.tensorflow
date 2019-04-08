
int main(){
	char a[100],s[100],ex[100],b[100];
	int i,j,k,l,m=0,n,flag,len,D[100],A=0;
	gets(s);
	gets(a);
	gets(b);
	len=strlen(a);
	for(i=0;i<100;i++)
	{
		D[i]=0;
	}
	for(i=0;s[i]!='\0';i++)
	{
		flag=1;
		if ((i!=0&&s[i]==a[0]&&s[i-1]==' '&&(s[i+len]==' '||s[i+len]=='\0'))||(i==0&&s[i]==a[0]&&s[i+len]==' '))
		{
			k=i;
			for (j=i;j<i+len;j++)
			{
				ex[j-i]=s[k];
				k++;
			}
    		for (j=0;j<len;j++)
			{
    			if (ex[j]!=a[j])
    				flag=0;
			}
		}
        else
			flag=0;
		if (flag)
		{
			D[m]=i;
			m++;
//			printf("%d %d %d\n",m,D[m-1],i);
		}
	}
    if (m==1)
	{
    	for(i=0;i<D[0];i++)
		{
	    	printf("%c",s[i]);
		}
        for(i=0;b[i]!='\0';i++)
		{
		    printf("%c",b[i]);
		}
		for(i=D[0]+len;s[i]!='\0';i++)
		{
		    printf("%c",s[i]);
		}
	}
    else if (m>1) 
	{
    	for(i=0;i<D[0];i++)
		{
	    	printf("%c",s[i]);
		}
    	for(n=0;n<m;n++)
		{
		    for(i=0;b[i]!='\0';i++)
			{
		        printf("%c",b[i]);
			}
	    	for(i=D[n]+len;i<D[n+1];i++)
			{
			    printf("%c",s[i]);
			}
		}
    	for(i=D[m-1]+len;s[i]!='\0';i++)
		{
		    printf("%c",s[i]);
		}
	}
    else
		for(l=0;s[l]!='\0';l++)
		{
			printf("%c",s[l]);
		}
	printf("\n");
	return 0;
}