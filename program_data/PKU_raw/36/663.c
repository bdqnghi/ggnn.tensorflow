main()
{
	char str1[1000],str2[1000];
	int count1[128]={0},count2[128]={0};
	int b=1,i;
	scanf("%s %s",str1,str2);
	for(i=0;i<=strlen(str1)-1;i++)
		count1[str1[i]]++;
	for(i=0;i<=strlen(str2)-1;i++)
		count2[str2[i]]++;
	for(i=0;i<=127;i++)
		if(count1[i]!=count2[i])b=0;
	if(b==0)printf("NO");
	else printf("YES");
}
