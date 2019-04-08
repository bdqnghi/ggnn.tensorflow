
void main()
{ 
	char s1[50],s2[50];
	int n,i,j,length1,length2,k;
	k=0;
	scanf("%s",s1);
	scanf("%s",s2);
	length1=strlen(s1);
	length2=strlen(s2);
	for(i=0;i<length2;i++)
	{
		if(s1[0]==s2[i])
		{
			j=0;
			while(s2[j+i]==s1[j]&&j<length1)j++;
			if(j==length1)k=i;
		}
		if(k)break;
	}
		printf("%d",k);
	
}