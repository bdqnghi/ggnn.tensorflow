int main(){
char str[301],zimu[27]="abcdefghijklmnopqrstuvwxyz";
int i,k,len,num[27],sum=0;
scanf("%s",&str);
len=strlen(str);
for(i=0;i<27;i++)
{
	num[i]=0;
	for(k=0;k<len;k++)
	{
		if(zimu[i]==str[k])
		{
			num[i]++;
		}

	}

}
for(i=0;i<27;i++)
{
         sum+=num[i];
	if(num[i]>0)
	{
	printf("%c=%d\n",zimu[i],num[i]);
	}
}
if(sum==0)
{
printf("No");
}

return 0;
}
