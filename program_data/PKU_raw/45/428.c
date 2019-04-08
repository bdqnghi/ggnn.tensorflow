int main()
{
	char str1[50],str2[50],c[50][50];
	char (*pc)[50],*p1,*p2;
	int i,j=-1,k,s1,s2,n,a[50]={0},*b;
	scanf("%s %s",str1,str2);
	s1=strlen(str1);s2=strlen(str2);
	pc=c;p1=str1;p2=str2;b=a;
	for(i=0;i<s2;i++)
		if(*(p2+i)==*p1)
			if(i<=s2-s1)
			{
				j++;
				for(k=0;k<s1;k++)
					*(*(pc+j)+k)=*(p2+k+i);
				*(*(pc+j)+k)='\0';
				*(b+j)=i;
			}
    n=j+1;
	for(i=0;i<n;i++)
	{	
		if(strcmp(str1,*(pc+i))==0)
	     printf("%d\n",*(b+i));
		break;
	}
}