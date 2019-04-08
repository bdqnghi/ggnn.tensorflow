int compare(const void* a,const void* b)
{
	return*(char*)b-*(char*)a;
}
void main()
{
	int i;
	char a[100],b[100];
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))
	{
		printf("NO");
	}
	else
	{
        qsort(a,strlen(a),sizeof(char),compare);
	    qsort(b,strlen(a),sizeof(char),compare);
	    for(i=0;i<strlen(a);i++)
		{
		    if(a[i]!=b[i])
		    	break;
		}
    	if(i==strlen(a))
	    	printf("YES");
    	else
		    printf("NO");
	}
return 0;
}