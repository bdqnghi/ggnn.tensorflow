int main()
{
	char str[501];
	int l,length,i,j,k,p,start,end;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i+1<length;i++)
		if(str[i]==str[i+1])
			printf("%c%c\n",str[i],str[i+1]);//??????2?????
	for(l=3;l<=length;l++)//l??????????
	{
		for(i=0;i+l-1<length;i++)//i????????????
		{
			start=i;end=i+l-1;//????????
			j=i+l-1;
			k=i;
			while(k<=j)
			{
				if(str[k]==str[j])
				{
					k++;
					j--;
				}
				else break;//????????????????
			}
			if(((l%2==0)&&(k-1==j))||((l%2==1)&&(k-1==j+1)))//??k?j??
				for(p=start;p<=end;p++)
					printf("%c",str[p]);
				printf("\n");
		}
	}
	return 0;
}
