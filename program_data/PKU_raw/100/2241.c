void main()
{
    char a[300];
    int i,b[130]={0},p=0;
    gets(a);
    for(i=0;a[i];i++)
    {
    	switch(a[i])
    	{
    		case 'A':b[65]++;break;
    		case 'B':b[66]++;break;
    		case 'C':b[67]++;break;
    		case 'D':b[68]++;break;
    		case 'E':b[69]++;break;
    		case 'F':b[70]++;break;
    		case 'G':b[71]++;break;
    		case 'H':b[72]++;break;
    		case 'I':b[73]++;break;
    		case 'J':b[74]++;break;
    		case 'K':b[75]++;break;
    		case 'L':b[76]++;break;
    		case 'M':b[77]++;break;
    		case 'N':b[78]++;break;
    		case 'O':b[79]++;break;
    		case 'P':b[80]++;break;
    		case 'Q':b[81]++;break;
    		case 'R':b[82]++;break;
    		case 'S':b[83]++;break;
    		case 'T':b[84]++;break;
    		case 'U':b[85]++;break;
    		case 'V':b[86]++;break;
    		case 'W':b[87]++;break;
    		case 'X':b[88]++;break;
    		case 'Y':b[89]++;break;
    		case 'Z':b[90]++;break;
    		case 'a':b[97]++;break;
    		case 'b':b[98]++;break;
    		case 'c':b[99]++;break;
    		case 'd':b[100]++;break;
    		case 'e':b[101]++;break;
    		case 'f':b[102]++;break;
    		case 'g':b[103]++;break;
    		case 'h':b[104]++;break;
    		case 'i':b[105]++;break;
    		case 'j':b[106]++;break;
    		case 'k':b[107]++;break;
    		case 'l':b[108]++;break;
    		case 'm':b[109]++;break;
    		case 'n':b[110]++;break;
    		case 'o':b[111]++;break;
    		case 'p':b[112]++;break;
    		case 'q':b[113]++;break;
    		case 'r':b[114]++;break;
    		case 's':b[115]++;break;
    		case 't':b[116]++;break;
    		case 'u':b[117]++;break;
    		case 'v':b[118]++;break;
    		case 'w':b[119]++;break;
    		case 'x':b[120]++;break;
    		case 'y':b[121]++;break;
    		case 'z':b[122]++;break;
    		default: a[i]=0;
    	}
    }
    for(i=65;i<123;i++)
    if(b[i]!=0) {p=1;printf("%c=%d\n",i,b[i]);}
    if(p==0) printf("No");
}