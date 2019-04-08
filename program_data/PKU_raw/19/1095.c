
int main() 
{ 
	char string[4000]; 
	char a[100],b[100];
	char str[40][100]; 
	char temp[100]=""; 
	int k=0,j=0,i,n,m; 
	gets(string); 
	n=strlen(string); 
	for (i=0;i<n;i++) 
	{ 
		if ( string[i]!=' ') 
		{ 
			temp[k]=string[i]; 
			str[j][k]=string[i]; 
			k++; 
		} 
		else 
		{ 
			strcpy(str[j],temp); 
			k=0;
			j++; 
			for(m=0;m<100;m++)temp[m]=0; 

		} 
		if(i==n-1)
		{ 
		strcpy(str[j],temp); 
		for(m=0;m<100;m++)temp[m]=0;  
		}
	}
	gets(a);
	gets(b);
	for(i=0;i<=j;i++)
	{
		if(strcmp(str[i],a)==0)
		{
			strcpy(str[i],b);
		}
	}
	for(i=0;i<j;i++)printf("%s ",str[i]);
	printf("%s",str[j]);
	return 0;
}

