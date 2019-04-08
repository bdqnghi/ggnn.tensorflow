int main()
{
char juzi[100];
char danci[200][200],ci1[200],ci2[200];
int i=0,j=0,k=0,f,index;
gets(juzi);
gets(ci1);
gets(ci2);
    index=0;
	for(i=0;;i++){
		for(k=0;;){
			if(juzi[index]!=' '&&juzi[index]!=0)
{
				danci[i][k]=juzi[index];
				index++;
				k++;
			}
else
{
				danci[i][k]=0;
				index++;
				k++;
				break;
			}
}
                         if(juzi[index-1]==0)
                           {
			break;
}
                       }
	for(f=0;f<100;f++)
	{
		if(strcmp(danci[f],ci1)==0)
		{
			strcpy(danci[f],ci2);
		}
	}
for(j=0;j<=i;j++)
{
if(j==i)
{
printf("%s",danci[j]);
}
else
{
printf("%s ",danci[j]);
}
		}
return 0;
}
