
int main()
{
	char str[1000],sub[1000],rep[1000];
	int len1,len2,len3,i,j,k;
	gets(str);
	gets(sub);
	gets(rep);
	len1=strlen(str);
	len2=strlen(sub);
	len3=strlen(rep);
 for(j=0;j<len2;j++)	
	 
 for(i=0;i<len1;i++)
 {if(str[i]!=sub[0])continue;
	
	 if(str[i]==sub[0]&&str[i+1]==sub[1]&&str[i+2]==sub[2]&&str[i+3]==sub[3])break;	
 }
			if(i<len1)
             for(k=i;k<i+len2;k++)
					  str[k]=rep[k-i];
 
          
				  printf("%s",str);
				return 0;
}
