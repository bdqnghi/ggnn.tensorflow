
int main(int argc, char* argv[])
{
 char a[30];
 char b[30];
 gets(a);
 gets(b);
 int i;
 int m,n;
 m=strlen(a);
 n=strlen(b);
 for(i=0;i<m;i++){
	 
	 switch(a[i]){
	    case 'A': a[i]='a';break;
		case 'B': a[i]='b';break;
		case 'C': a[i]='c';break;
		case 'D': a[i]='d';break;
		case 'E': a[i]='e';break;
		case 'F': a[i]='f';break;
		case 'G': a[i]='g';break;
		case 'H': a[i]='h';break;
		case 'I': a[i]='i';break;
		case 'J': a[i]='j';break;
		case 'K': a[i]='k';break;
		case 'L': a[i]='l';break;
		case 'M': a[i]='m';break;
		case 'N': a[i]='n';break;
		case 'O': a[i]='o';break;
		case 'P': a[i]='p';break;
		case 'Q': a[i]='q';break;
		case 'R': a[i]='r';break;
		case 'S': a[i]='s';break;
		case 'T': a[i]='t';break;
		case 'U': a[i]='u';break;
		case 'V': a[i]='v';break;
		case 'W': a[i]='w';break;
		case 'X': a[i]='x';break;
		case 'Y': a[i]='y';break;
		case 'Z': a[i]='z';break;
		default:break;
	 }

	 

 }
 for(i=0;i<n;i++){
	  
		switch(b[i]){
	    case 'A': b[i]='a';break;
		case 'B': b[i]='b';break;
		case 'C': b[i]='c';break;
		case 'D': b[i]='d';break;
		case 'E': b[i]='e';break;
		case 'F': b[i]='f';break;
		case 'G': b[i]='g';break;
		case 'H': b[i]='h';break;
		case 'I': b[i]='i';break;
		case 'J': b[i]='j';break;
		case 'K': b[i]='k';break;
		case 'L': b[i]='l';break;
		case 'M': b[i]='m';break;
		case 'N': b[i]='n';break;
		case 'O': b[i]='o';break;
		case 'P': b[i]='p';break;
		case 'Q': b[i]='q';break;
		case 'R': b[i]='r';break;
		case 'S': b[i]='s';break;
		case 'T': b[i]='t';break;
		case 'U': b[i]='u';break;
		case 'V': b[i]='v';break;
		case 'W': b[i]='w';break;
		case 'X': b[i]='x';break;
		case 'Y': b[i]='y';break;
		case 'Z': b[i]='z';break;
		default:break;
	 }
 }
 if(strcmp(a,b)>0){
	 printf(">");
 }
 else if(strcmp(a,b)<0){
	 printf("<");
 }
 else printf("=");


	return 0;
}

