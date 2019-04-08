
main()
{
	char init[300];
	int letter[27]={0};
	int i;
	int t=0;
	gets(init);
for(i=0;i<=strlen(init);i++)
switch(init[i])
{
case'a' : letter[1]++;break;
case'b' : letter[2]++;break;
case'c' : letter[3]++;break;
case'd' : letter[4]++;break;
case'e' : letter[5]++;break;
case'f' : letter[6]++;break;
case'g' : letter[7]++;break;
case'h' : letter[8]++;break;
case'i' : letter[9]++;break;
case'j' : letter[10]++;break;
case'k' : letter[11]++;break;
case'l' : letter[12]++;break;
case'm' : letter[13]++;break;
case'n' : letter[14]++;break;
case'o' : letter[15]++;break;
case'p' : letter[16]++;break;
case'q' : letter[17]++;break;
case'r' : letter[18]++;break;
case's' : letter[19]++;break;
case't' : letter[20]++;break;
case'u' : letter[21]++;break;
case'v' : letter[22]++;break;
case'w' : letter[23]++;break;
case'x' : letter[24]++;break;
case'y' : letter[25]++;break;
case'z' : letter[26]++;break;
}
if(letter[1]!=0) {printf("a=%d\n",letter[1]);t++;}
if(letter[2]!=0) {printf("b=%d\n",letter[2]);t++;}
if(letter[3]!=0) {printf("c=%d\n",letter[3]);t++;}
if(letter[4]!=0) {printf("d=%d\n",letter[4]);t++;}
if(letter[5]!=0) {printf("e=%d\n",letter[5]);t++;}
if(letter[6]!=0) {printf("f=%d\n",letter[6]);t++;}
if(letter[7]!=0) {printf("g=%d\n",letter[7]);t++;}
if(letter[8]!=0) {printf("h=%d\n",letter[8]);t++;}
if(letter[9]!=0) {printf("i=%d\n",letter[9]);t++;}
if(letter[10]!=0) {printf("j=%d\n",letter[10]);t++;}
if(letter[11]!=0) {printf("k=%d\n",letter[11]);t++;}
if(letter[12]!=0) {printf("l=%d\n",letter[12]);t++;}
if(letter[13]!=0) {printf("m=%d\n",letter[13]);t++;}
if(letter[14]!=0) {printf("n=%d\n",letter[14]);t++;}
if(letter[15]!=0) {printf("o=%d\n",letter[15]);t++;}
if(letter[16]!=0) {printf("p=%d\n",letter[16]);t++;}
if(letter[17]!=0) {printf("q=%d\n",letter[17]);t++;}
if(letter[18]!=0) {printf("r=%d\n",letter[18]);t++;}
if(letter[19]!=0) {printf("s=%d\n",letter[19]);t++;}
if(letter[20]!=0) {printf("t=%d\n",letter[20]);t++;}
if(letter[21]!=0) {printf("u=%d\n",letter[21]);t++;}
if(letter[22]!=0) {printf("v=%d\n",letter[22]);t++;}
if(letter[23]!=0) {printf("w=%d\n",letter[23]);t++;}
if(letter[24]!=0) {printf("x=%d\n",letter[24]);t++;}
if(letter[25]!=0) {printf("y=%d\n",letter[25]);t++;}
if(letter[26]!=0) {printf("z=%d\n",letter[26]);t++;}

if(t==0) printf("No\n");
}
