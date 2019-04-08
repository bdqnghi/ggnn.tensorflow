main()
{
char a[51],b[51];
int i,j,k,l,len,num,kill;
i=0;
do
{i++;scanf ("%c",&a[i]);} while (a[i]!=' ');
len=i;
i=0;
do{i++;scanf ("%c",&b[i]);} while (b[i]!='\n');
num=i;
l=1;
bomarc_loop:
for (i=l;i<=num;i++)
{
kill=0;l=i;
		for (j=1;j<=len;j++,l++)
		{
			if (a[j]==b[l]) kill++; 
		}
		if (kill==len-1) {printf ("%d",i-1);break;} 
}

return 0;
}