int main()
{
	char str1[100],str2[100],term;
	int i,j,len1,len2,k;
	scanf("%s%s",str1,str2);
	
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2){
    for(j=1;j<=len1;j++)
			for(i=0;i<len1-j;i++)
			{
				if(str1[i]>str1[i+1])
				{
					term=str1[i];
					str1[i]=str1[i+1];
					str1[i+1]=term;
				}
			}
				for(j=1;j<=len2;j++)
					for(i=0;i<len2-j;i++)
					{
				if(str2[i]>str2[i+1])
				{
					term=str2[i];
					str2[i]=str2[i+1];
					str2[i+1]=term;
				}
					}
				    k=0;
					for(i=0;i<len1;i++){
						if((str1[i]-'0')!=(str2[i]-'0'))k=1;}
	}
	if((len1!=len2)||k==1)printf("NO");
	else printf("YES");
}

