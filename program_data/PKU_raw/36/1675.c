main()
{
char a[50],b[50];
int i,j,k,len,kill;
i=0;
do
{i++;scanf ("%c",&a[i]);} while (a[i]!=' ');
len=i;
i=0;
do
{i++;scanf ("%c",&b[i]);} while (b[i]!='\n');
if (i!=len) {printf ("NO");goto end_of_evan;}
len=len-1;
death_and_rebirth:
kill=0;
for (i=len;i>=1;i--)
	{
		if (b[i]==a[len]) 
			{
			kill=1;
			for(j=i;j<len;j++)
				{
					b[j]=b[j+1];
				}
			len=len-1;goto NGE_loop;
			}
	}
	NGE_loop:
	if (kill==0) {printf ("NO");goto end_of_evan;}
	else if (len>=1) goto death_and_rebirth;

if (kill==1) printf("YES");


end_of_evan:
return 0;
}