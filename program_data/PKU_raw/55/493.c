
void main()
{
    int i,j,k,t,l;
    long sum=0;
    int a,b;
    char c[100];

    scanf("%d%s%d",&a,c,&b);
    
    for(i=0;i<strlen(c);i++)
    {
                            if(c[i]>='0'&&c[i]<='9')
                            c[i]-=47;
                            else if(c[i]>='a'&&c[i]<='z')
                            c[i]=c[i]-'a'+11;
                            else if(c[i]>='A'&&c[i]<='Z')
                            c[i]=c[i]-'A'+11;
                            }
    for(k=0;k<strlen(c);k++)
    {
                            sum=sum*a+(c[k]-1);
//                            printf("%d",sum);
                            }
    for(j=0;sum>0;j++)
    {
                 c[j]=sum%b;
                 sum=sum/b;
                 }
    for(t=0;t<j;t++)
    {
                            if(c[t]>=0&&c[t]<=9)
                            c[t]+=48;
                            else if(c[t]>=10&&c[t]<=36)
                            c[t]=c[t]+'A'-10;
                    }
    if(j!=0)
	  for(l=j-1;l>=0;l--)
	  {
                       printf("%c",c[l]);
                       }
	  else
		  printf("0");
    printf("\n");
    }

