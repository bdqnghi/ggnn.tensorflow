int main()
{
    char zfc[NUM*LEN],z1[100],z2[100];
    char c[NUM][LEN];
    int i,j,k,n,p,count,count1,count2,count4,count3[50];
    int num1,num2,d=0;
    gets(zfc);
	count=0;
	for(k=0;;)
		{
            if(zfc[count]!=' '&&zfc[count]!=0)
			{
                c[0][k]=zfc[count];
                count++;
                k++;
            }
			else
			{
                c[0][k]=0;
                count++;
                k++;
                break;
            }
        }
		if(k-1!=0)printf("%d",k-1);
	for(i=1;;i++)
	{
        for(k=0;;)
		{
            if(zfc[count]!=' '&&zfc[count]!=0)
			{
                c[i][k]=zfc[count];
                count++;
                k++;
            }
			else
			{
                c[i][k]=0;
                count++;
                k++;
                break;
            }
        }
		if(k-1!=0)printf(",%d",k-1);
        if(zfc[count-1]==0){
            break;
        }
    }
   return 0;
}

