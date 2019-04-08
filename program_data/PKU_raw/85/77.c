
int main(int argc, char* argv[])
{
	int i,j,n,temp=0;
	char s[20];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",s);
		switch (s[0]) 
		{
		       case 'a' :
			   case 'b' :
			   case 'c' :
			   case 'd' :
			   case 'e' :
			   case 'f' :
			   case 'g' :
		 	   case 'h' :
			   case 'i' :
			   case 'j' :
			   case 'k' :
			   case 'l' :
			   case 'm' :
			   case 'n' :
			   case 'o' :
			   case 'p' :
			   case 'q' :
			   case 'r' :
			   case 's' :
			   case 't' :
			   case 'u' :
			   case 'v' :
			   case 'w' :
			   case 'x' :
			   case 'y' :
			   case 'z' :
			   case 'A' :
			   case 'B' :
			   case 'C' :
			   case 'D' :
			   case 'E' :
			   case 'F' :
			   case 'G' :
		 	   case 'H' :
			   case 'I' :
			   case 'J' :
			   case 'K' :
			   case 'L' :
			   case 'M' :
			   case 'N' :
			   case 'O' :
			   case 'P' :
			   case 'Q' :
			   case 'R' :
			   case 'S' :
			   case 'T' :
			   case 'U' :
			   case 'V' :
			   case 'W' :
			   case 'X' :
			   case 'Y' :
			   case 'Z' :
			   case '_' : for (j=1,temp==0;s[j]!='\0';j++)
						  {
			                  switch (s[j]) 
							  {
			                     case '1' :
			                     case '2' :
			                     case '3' :
			                     case '4' :
			                     case '5' :
			                     case '6' :
			                     case '7' :
			                     case '8' :
			                     case '9' :
			                     case '0' :
		   	                     case 'a' :
			                     case 'b' :
			                     case 'c' :
			                     case 'd' :
			                     case 'e' :
			                     case 'f' :
			                     case 'g' :
		 	                     case 'h' :
			                     case 'i' :
			                     case 'j' :
			                     case 'k' :
			                     case 'l' :
			                     case 'm' :
			                     case 'n' :
			                     case 'o' :
			                     case 'p' :
			                     case 'q' :
			                     case 'r' :
			                     case 's' :
			                     case 't' :
			                     case 'u' :
			                     case 'v' :
			                     case 'w' :
			                     case 'x' :
			                     case 'y' :
			                     case 'z' :
			                     case 'A' :
			                     case 'B' :
			                     case 'C' :
			                     case 'D' :
			                     case 'E' :
			                     case 'F' :
			                     case 'G' :
		 	                     case 'H' :
			                     case 'I' :
			                     case 'J' :
			                     case 'K' :
			                     case 'L' :
			                     case 'M' :
			                     case 'N' :
			                     case 'O' :
			                     case 'P' :
			                     case 'Q' :
			                     case 'R' :
			                     case 'S' :
			                     case 'T' :
			                     case 'U' :
			                     case 'V' :
			                     case 'W' :
			                     case 'X' :
			                     case 'Y' :
			                     case 'Z' :
			                     case '_' :  break;
                                 default : temp=1; break;
							  }
						  } ; break;
			default : temp=1; break;
		  }
		if (temp==0) printf("yes\n");
		else printf("no\n");
		temp=0;
	}


	return 0;
}