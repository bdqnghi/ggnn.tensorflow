int main()
{
    char zfc[256],z1[256],z2[256];
    int i,j,k,n,p,count,count1,count2,count4,count3[50];
    int num1,num2,d=0;
    gets(zfc);
	gets(z1);
	gets(z2);
    count=0;
	num1=strlen(zfc);
	num2=strlen(z1);
    for(i=0;i<num1;i++)
	{
		count1=0;
		for(j=0;j<num2;j++)
		{
			if(zfc[i+j]==z1[j])count1++;
		}
		if(count1==num2)
			break;
	}
	if(count1==num2)
	{
		for(j=i;j<num2+i;j++)
		{
			zfc[j]=z2[j-i];
		}
	}
  	printf("%s",zfc);
	return 0;
}

