
void main()
{


	char str[300];
	char stemp[300];
	int i,j;
	int itemp[300];
	int count;
	char c;

	scanf("%s",str);
	memset(stemp,0,300);
    j=0;
    for(i=0;i<strlen(str);i++)
	{
        if(str[i]>=97 && str[i]<=122)//???????
		{


         stemp[j]=str[i];  
         j++;

		}

	}
    if(j==0)
		printf("No");
	//??stemp??????????????
   for(i=0;i<strlen(stemp);i++)
	   itemp[i]=0;

   //???stemp??????

   for(i=1;i<=strlen(stemp);i++)
	   for(j=0;j<strlen(stemp)-i;j++)
	   {
           if(stemp[j]>stemp[j+1])
		   {
             c=stemp[j+1];
			 stemp[j+1]=stemp[j];
			 stemp[j]=c;

		   }

	   }

   for(i=0;i<strlen(stemp);i++)
   {
	   count=1;
	   if(itemp[i]==1)
		   continue;
        for(j=i+1;j<strlen(stemp);j++)
		{
             if(itemp[j]==1)
				 continue;

			 if(stemp[j]==stemp[i])
			 {
				 itemp[j]=1;
				 count++;
			 }

     		}

      printf("%c=%d\n",stemp[i],count);
   }




















}