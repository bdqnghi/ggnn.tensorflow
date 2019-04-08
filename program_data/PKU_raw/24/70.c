char sentence[1000];
void main()
{
	gets(sentence);
	int i,lenth=0,place=0,max=0;
	for(i=0;sentence[i]!='\0';i++)
	{
		for (lenth=0;(sentence[i]>='a' && sentence[i]<='z') ||(sentence[i]>='A' && sentence[i]<='Z');i++)
		{
			lenth++;
			if(max<lenth)
			{
				max=lenth;
				place=i;
			}
		}
	}

	for (i=(place-max+1);i<=place;i++) printf("%c",sentence[i]);
	 printf("\n");
	
    int j,lenth2=0,place2=0,min=100;
	for(j=0;sentence[j]!='\0';j++)
	{
		for (lenth2=0;(sentence[j]>='a' && sentence[j]<='z')||(sentence[j]>='A' && sentence[j]<='Z');j++)
		{
			lenth2++;
		}
			if(min>lenth2)
			{
				min=lenth2;
				place2=j;
			}
		
	}

    for (j=(place2-min);j<place2;j++)   printf("%c",sentence[j]);
	printf("\n");

}
