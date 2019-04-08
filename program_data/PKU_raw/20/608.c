
int main ()
{
int max, i, max_index;
char str1[20], str2[20];
while (scanf("%s%s", str1, str2)!=EOF)
{
	int ans[20]={0};
max=0;
for (i=1;str1[i];i++)
if (str1[i]>max) max=str1[i], max_index=i;

strncat (ans, str1, max_index+1);
strcat(ans, str2);
strcat(ans, str1+max_index+1);
printf ("%s\n", ans);
}
return 0;
}