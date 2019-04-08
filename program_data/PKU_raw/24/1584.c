int main()
{
     int i=0,l,k=0,count[10000],ct[200]={0},max,min;
    char zfc[10000];
    gets(zfc);
    l=strlen(zfc);
    while(i<l)
    {
                           if(zfc[i]!=' '&&zfc[i]!=',')
                           {
                                        count[i]=k;
                                        ct[k]+=1;
                           }
                           else if(zfc[i]==' ')
                           {
                               k=k+1;
							   count[i]=-1;
                           }
						   else
						   {
							       count[i]=-1;
								   k=k+1;
								   i=i+1;
								   count[i]=-1;
							}
                           i++;
    }
    for(i=0;i<=k;i++)
    {
                     if(i==0)
                     {
                             max=0;
                             min=0;
                     }
                     else
                     {
                         if(ct[i]>ct[max])
                         {
                                          max=i;
                         }
                         else if(ct[i]<ct[min])
                         {
                                            min=i;
                         }
                         else;
                     }
    }
    for(i=0;i<l;i++)
    {
                    if(count[i]==max)
                    {
                                     printf("%c",zfc[i]);
                    }
    }
    printf("\n");
    for(i=0;i<l;i++)
    {
                    if(count[i]==min)
                    {
                                     printf("%c",zfc[i]);
                    }
    }
    return 0;
}