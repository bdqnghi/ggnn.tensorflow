int main()
{
	int i,n[52]={0},j=0;
	char s[300];
	gets(s);
	for (i=0;s[i]!='\0';i++)
	{
		switch(s[i])
		{
		case'A':n[0]++;break;
		case'B':n[1]++;break;
		case'C':n[2]++;break;
		case'D':n[3]++;break;
		case'E':n[4]++;break;
		case'F':n[5]++;break;
		case'G':n[6]++;break;
		case'H':n[7]++;break;
		case'I':n[8]++;break;
		case'J':n[9]++;break;
		case'K':n[10]++;break;
		case'L':n[11]++;break;
		case'M':n[12]++;break;
		case'N':n[13]++;break;
		case'O':n[14]++;break;
		case'P':n[15]++;break;
		case'Q':n[16]++;break;
		case'R':n[17]++;break;
		case'S':n[18]++;break;
		case'T':n[19]++;break;
		case'U':n[20]++;break;
		case'V':n[21]++;break;
		case'W':n[22]++;break;
		case'X':n[23]++;break;
		case'Y':n[24]++;break;
		case'Z':n[25]++;break;
		case'a':n[26]++;break;
		case'b':n[27]++;break;
		case'c':n[28]++;break;
		case'd':n[29]++;break;
		case'e':n[30]++;break;
		case'f':n[31]++;break;
		case'g':n[32]++;break;
		case'h':n[33]++;break;
		case'i':n[34]++;break;
		case'j':n[35]++;break;
		case'k':n[36]++;break;
		case'l':n[37]++;break;
		case'm':n[38]++;break;
		case'n':n[39]++;break;
		case'o':n[40]++;break;
		case'p':n[41]++;break;
		case'q':n[42]++;break;
		case'r':n[43]++;break;
		case's':n[44]++;break;
		case't':n[45]++;break;
		case'u':n[46]++;break;
		case'v':n[47]++;break;
		case'w':n[48]++;break;
		case'x':n[49]++;break;
		case'y':n[50]++;break;
		case'z':n[51]++;break;
		}
	}
for (i=0;i<26;i++)
{
	if (n[i])
	{
		printf("%c=%d\n",i+65,n[i]);
		j++;
	}
}
for (i=26;i<52;i++)
{
	if (n[i])
	{
		printf("%c=%d\n",i+71,n[i]);
		j++;
	}
}
if(j==0)
		printf("No");
return 0;
}