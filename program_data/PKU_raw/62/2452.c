int main(){
	char a[1000];
	int i,j,k,n;
	gets(a);
	printf("%c",a[0]);
	for(i=1;a[i];i++)
	{
		if(a[i]!=' ')
		printf("%c",a[i]);
		else if(a[i]==' ')
		{
			if(a[i-1]!=' ')
		    {
		       printf("%c",a[i]);
		     }
	
	    }
	}

		return 0;
}