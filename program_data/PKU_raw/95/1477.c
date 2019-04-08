int change(char s[81], char t[81]);
int main()
{
	char s[81],t[81];
	int a;
	gets(s);
	gets(t);
	a = change(s,t);
    if (a >0) printf(">");
    if (a <0) printf("<");
    if (a ==0) printf("=");
    return 0;
}

int change(char s[81], char t[81])

{
for (int i=0; s[i] != 0; ++i)
{
if (s[i] >='A' && s[i] <='Z') 
 s[i] += 'a'-'A';
}
for (int i=0; t[i] != 0; ++i)
{
if (t[i] >='A' && t[i] <='Z') 
 t[i] += 'a'-'A';
}
return strcmp(s, t);
}
