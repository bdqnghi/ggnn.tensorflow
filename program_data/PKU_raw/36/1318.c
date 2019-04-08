

int compare(const void*a,const void*b);
int main(int argc, char* argv[])
{
	int i,n,j,tmp,len1,len2;
	char a[1000],b[1000];
	
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%s%s",a,b);
	len1=strlen(a);
    len2=strlen(a);
	qsort(a,len1,sizeof(char),compare);
    qsort(b,len2,sizeof(char),compare);
   

		if(strcmp(a,b)==0)
			printf("YES\n");
		else printf("NO\n");
		
return 0;
}

int compare(const void*a,const void*b)
{return*(char*)b-*(char*)a;}

