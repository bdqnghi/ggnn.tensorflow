
int main(int argc, char* argv[])
{
	char s[100],a[100],b[100];
	int i,j=0,k,m;
    int n=1;
	char t[100];

	gets(s);
	gets(a);
	gets(b);
    
	//??????
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')n++;
	}

	//???????????
        for(i=0;s[i]!=' ';i++)
		{
		    t[i]=s[i];
		}
	    t[i]='\0';
		if(strcmp(t,a)==0){printf("%s",b);}
		else{printf("%s",t);}
		k=i+1;

	//?????
        for(i=1;i<n-1;i++)
		{
			m=0;
			for(j=k;s[j]!=' ';j++)
			{
				t[m]=s[j];
				m++;
			}
			t[m]='\0';
			if(strcmp(t,a)==0){printf(" %s",b);}
		    else{printf(" %s",t);}
		    k=j+1;
		}

		m=0;
		for(j=k;s[j]!='\0';j++)
		{
			t[m]=s[j];
			m++;
		}
		t[m]='\0';
		if(strcmp(t,a)==0){printf(" %s",b);}
	    else{printf(" %s",t);}

	return 0;
}
