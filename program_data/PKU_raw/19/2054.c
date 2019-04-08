int main()
{
    char zfc[10000],a[100],b[100];
    int i,lone,ltwo,lthree,k,shuzu[10000]={0},p=0,count[10000];
	gets(zfc);
	gets(a);
	gets(b);
	lone=strlen(zfc);
	ltwo=strlen(a);
	lthree=strlen(b);
	for(i=0;i<lone-ltwo+1;i++)
	{
		if(i==0)
		{
		      for(k=0;k<ltwo;k++)
			  {
				   if(zfc[k]==a[k])
				   {
					   count[i]+=1;
				   }
			  }
			  if(count[i]==ltwo&&zfc[ltwo]==' ') 
			  {
				  shuzu[i]=1;
               }
		}
		else if(i>0&&i<lone-ltwo)
		{
			for(k=0;k<ltwo;k++)
			{
				if(zfc[k+i]==a[k])
				{
					count[i]+=1;
				}
			}
			if(count[i]==ltwo&&zfc[i+ltwo]==' '&&zfc[i-1]==' ') 
			{
				shuzu[i]=1;
			}
		}
		else
		{
            for(k=0;k<ltwo;k++)
            {
                               if(zfc[k+i]==a[k])
                               {
                                                 count[i]+=1;
                               }
            }
            if(count[i]==ltwo&&zfc[i-1]==' ')
            {
                                           shuzu[i]=1;
            }
         } 
  } 
	while(p<lone)
	{
                 if(shuzu[p]==0)
                 {
                                printf("%c",zfc[p]);
                 }
                 else
                 {
                     printf("%s",b);
                     p=p+ltwo-1;
                 }
                 p++;
     }
	return 0;
}

