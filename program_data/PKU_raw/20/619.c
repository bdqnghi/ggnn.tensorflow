int main()
{
	int max,i,max1;
	char str[20],substr[4],ans[20];
	char *p=str,*q=substr;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		max=0;
		for(i=1;str[i];i++)
			if(str[i]>max)
				max=str[i],max1=i;
			strcpy(ans,"");
			strncat(ans,str,max1+1);
			strcat(ans,substr);
			strcat(ans,str+max1+1);
			printf("%s\n",ans);
	}
	return 0;
}
