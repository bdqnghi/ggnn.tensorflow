void main()
{int na,nb,nc,i,j,k,p,num=0;

char a[1000],b[100],c[100];
	gets(a);
	gets(b);
	gets(c);
	na=strlen(a);
nb=strlen(b);
nc=strlen(c);

for(i=0;i<1000;i++)
{for(j=0;j<nb;j++)
if(*(a+i+j)!=*(b+j))
 break;
if((j==nb&&*(a+i+nb)==' '&&*(a+i-1)==' ')||(j==nb&&i==0&&*(a+i+nb)==' ')||(j==nb&&i==na+num*(nc-nb)-nb&&*(a+i-1)==' '))
{num++;
	if(nb>=nc)
	{for(k=0;k<nc;k++)
		*(a+i+k)=*(c+k);
	for(p=0;p<na+num*(nc-nb);p++)
		*(a+i+nc+p)=*(a+i+nb+p);}
if(nb<nc)
{for(p=((nc-nb)*num+na-1);p>i+nb-1;p--)
*(a+p)=*(a+p-(nc-nb));
for(k=0;k<nc;k++)
*(a+i+k)=*(c+k);}
}
}
for(i=0;i<(na+num*(nc-nb));i++)
printf("%c",*(a+i));


}