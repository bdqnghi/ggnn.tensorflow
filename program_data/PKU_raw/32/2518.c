int main()
{
	 int k,i,j,m,n;
	 char  str1[100]={'\0'},str2[100]={'\0'},c[100][100]={'\0'};
	 scanf("%d\n",&k);
	 for(i=0;i<k;i++)
	 { gets(str1);gets(str2);getchar();
       m=strlen(str1);n=strlen(str2);
	   for(j=1;j<=n;j++)
	   {if((str1[m-j]-str2[n-j])>=0){str1[m-j]=str1[m-j]-str2[n-j];}
	   else{str1[m-j]=str1[m-j]-str2[n-j]+10;str1[m-j-1]=str1[m-j-1]-1;}
	   str1[m-j]+=48;}
	   strcpy(c[i],str1);
	 }
	 for(i=0;i<k;i++){printf("%s\n",c[i]);}
}
