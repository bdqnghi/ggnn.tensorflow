
int main(int argc, char* argv[])
{

    int a,b,i=0,k,x=0,n=0,m=0;
	char s[20];
	int t[20];
    scanf("%d%s%d",&a,s,&b);

	
 	while(s[i]!='\0')
	{
		n++;
		i++;	
	}

	for(i=0;i<n;i++)
	{
		if(s[i]<=57) k=(int)s[i]-48;
		else if(s[i]<=90) k=(int)s[i]-55;
		else k=(int)s[i]-87;
        x=x+k*(int)pow(a,n-i-1);
	}


	i=0;

loop:;
		    t[i]=x%b;
	        x=x/b;
			i++;
			m++;
			if(x!=0) goto loop; 

	for(i=m-1;i>=0;i--)
	{
		if(t[i]<=9)
		printf("%d",t[i]);
		else if(t[i]>=10)
		{
			t[i]=t[i]+55;
	    	printf("%c",t[i]);
		}
	}


	return 0;
}
  
