int main()
{
char ch,CH, str[301];
int i, len, no=1,NO=1, counter[26]={0},count[26]={0};
scanf("%s", str);
len = strlen(str);
for (i=0; i<len; i++) {
CH=ch = str[i];
if (ch >= 'a' && ch <= 'z') {
counter[ch-'a']++;
no = 0;
}
if (CH >= 'A' && CH <= 'Z'){
	count[CH-'A']++;
	NO++;
}
}
for (CH='A';CH<='Z';CH++){
if (count[CH-'A']>0){
	printf("%c=%d\n",CH,count[CH-'A']);
}
}
for (ch='a'; ch<='z'; ch++) {
if (counter[ch-'a'] > 0) {
printf("%c=%d\n", ch, counter[ch-'a']);
}
}
if (no && NO) {
printf("No");
}
return 0;
}
