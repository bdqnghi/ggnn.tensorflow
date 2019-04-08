void main()
{char str1[100],str2[100];
scanf("%s%s",str1,str2);
int sum1[26],sum2[26],sum3[26],sum4[26];
int n1=strlen(str1),n2=strlen(str2);
int i,j,k=0;
memset(sum1,0,sizeof(sum1));
memset(sum2,0,sizeof(sum2));
memset(sum3,0,sizeof(sum3));
memset(sum4,0,sizeof(sum4));
for(i=0;i<n1;i++)
{
	if(str1[i]>='a'&&str1[i]<='z')
		sum1[(str1[i]-'a')]++;
	if(str1[i]>='A'&&str1[i]<='Z')
		sum2[(str1[i]-'A')]++;
}
for(i=0;i<n2;i++)
{
	if(str2[i]>='a'&&str2[i]<='z')
		sum3[(str2[i]-'a')]++;
	if(str2[i]>='A'&&str2[i]<='Z')
		sum4[(str2[i]-'A')]++;
}
for(j=0;j<26;j++)
{if((sum1[j]!=sum3[j])||(sum2[j]!=sum4[j])) k++;}
if(k==0) printf("YES");
else printf("NO");

}

