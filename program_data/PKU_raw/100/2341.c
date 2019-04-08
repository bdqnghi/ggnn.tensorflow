int main()
{
	char a[300];
	int b[52]={0},i,j,sum=0;
	scanf("%s",a);
	for(i=0;;i++)
    {
		if(a[i]=='\0') break;
		else if(a[i]<65||a[i]>90&&a[i]<97||a[i]>122) continue;
		else if(a[i]>=65&&a[i]<=90) b[a[i]-65]++;
		else b[a[i]-97+26]++;
	}
	for(j=0;j<=51;j++)
	sum+=b[j];
	if(sum==0) 
		printf("No");
	else{
	   for(i=0;i<=25;i++)
	     if(b[i]!=0) 
	     printf("%c=%d\n",i+65,b[i]);
	      for(i=26;i<=51;i++)
	       if(b[i]!=0) 
	       printf("%c=%d\n",i+97-26,b[i]);
		}
	
	return 0;
}

	

	