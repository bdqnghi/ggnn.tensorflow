//#include<math.h>

int main()
{
 int i,len,max,maxi;
 char substr[4],str[11];
 for (i=0;i<4;i++)
	 substr[i]=-1;
 for(i=0;i<11;i++)
	 str[i]=-1;
 while (scanf("%s%s",str,substr)!=EOF)
 {
	 len=strlen(str);
	 max=-1;
	 maxi=-1;
	 for (i=0;i<len;i++)
	 {
		 if (str[i]>max)
		 {
			 max=str[i];
			 maxi=i;
		 }
	 }
	 for (i=0;i<len;i++)
	 {
		 printf("%c",str[i]);
		 if (i==maxi) printf("%s",substr);
	 }
	 printf("\n");
 }
 return 0;
}
