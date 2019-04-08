void main()
{
	int num(int i,char letter[100]);
	char letter[100];
	scanf("%s",letter);
	int count=strlen(letter);
	int i,j=0,k=0;
	int a[30];
	for(i=0;i<26;i++) a[i]=num(i,letter);
	for(i=0;i<26;i++){ if(a[i]>0) j++;}
	if(j==0) printf("No");
	else if(j>0)
		for(i=0;i<26;i++) 
		{
			if((a[i]>0)&&(k<j)){printf("%c=%d\n",i+97,a[i]);k++;}    
            else if((a[i]>0)&&(k==j)) printf("%c=%d",i+97,a[i]);
		}
}
int num(int i,char letter[100])
{
	int j;
	int l=0;
	for(j=0;;j++)
	{
		if(letter[j]==i+97) l++;
		if(letter[j]=='\0') break;
	}
    return(l);
}