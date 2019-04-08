int main()
{
char BeatFCbarcelona[500]={'\0'};
char substr[500][500]={'\0'};
int halamadrid[500]={0};
int k=0;
int store[500][3]={'\0'};
int i,j;
int n;
int len;
int max=0;
scanf("%d",&n);
scanf("%s",BeatFCbarcelona);
len=strlen(BeatFCbarcelona);
for(i=0;i<len-n+1;i++)
{
for(j=0;j<n;j++)
substr[i][j]=BeatFCbarcelona[i+j];
}
for(i=0;i<len-n+1;i++)
{
for(j=0;j<len-n+1;j++)
{
if(strcmp(substr[i],substr[j])==0)
halamadrid[i]++;
}
}
for(i=0;i<len-n+1;i++)
{
if(halamadrid[i]>max)
max=halamadrid[i];
}
if(max>1)
{
printf("%d\n",max);
for(i=0;i<len-n+1;i++)
{
if(halamadrid[i]==max)
{
strcpy(store[i],substr[i]);
for(j=0;j<i;j++)
{
if(strcmp(store[j],substr[i])==0)
k++;
}
if(k==0)
printf("%s\n",substr[i]);
}
k=0;
}
}
else printf("NO\n");
return 0;
} 