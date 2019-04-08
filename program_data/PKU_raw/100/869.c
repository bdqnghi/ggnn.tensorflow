int main() 
{ 
	int n[26]={0},i,j,p; 
    char m[200],t[26];
    t[0]='a';
	t[1]='b';
	t[2]='c';
	t[3]='d';
	t[4]='e';
	t[5]='f';
	t[6]='g';
	t[7]='h';
	t[8]='i'; 
	t[9]='j';
	t[10]='k';
	t[11]='l';
    t[12]='m';
	t[13]='n';
	t[14]='o';
	t[15]='p';
	t[16]='q';
	t[17]='r';
	t[18]='s';
	t[19]='t';
	t[20]='u';
	t[21]='v';
	t[22]='w';
	t[23]='x';
	t[24]='y';
	t[25]='z';
    gets(m); 
    for(i=0;m[i]!='\0';i++)  
	{
		switch(m[i]) 
		{
		case 'a': n[0]+=1;break; 
        case 'b': n[1]+=1;break; 
        case 'c': n[2]+=1;break; 
        case 'd': n[3]+=1;break; 
        case 'e': n[4]+=1;break; 
        case 'f': n[5]+=1;break; 
        case 'g': n[6]+=1;break;  
        case 'h': n[7]+=1;break; 
        case 'i': n[8]+=1;break; 
        case 'j': n[9]+=1;break; 
        case 'k': n[10]+=1;break; 
        case 'l': n[11]+=1;break; 
        case 'm': n[12]+=1;break; 
        case 'n': n[13]+=1;break; 
        case 'o': n[14]+=1;break; 
        case 'p': n[15]+=1;break; 
        case 'q': n[16]+=1;break; 
        case 'r': n[17]+=1;break; 
        case 's': n[18]+=1;break; 
        case 't': n[19]+=1;break; 
        case 'u': n[20]+=1;break; 
        case 'v': n[21]+=1;break; 
        case 'w': n[22]+=1;break; 
        case 'x': n[23]+=1;break; 
        case 'y': n[24]+=1;break; 
        case 'z': n[25]+=1;break; 
		}
	}
     p=0;
    for(j=0;j<26;j++)
	{        
                  if(n[j]!=0)
		{
                            p=1; 
			printf("%c=%d\n",t[j],n[j]);
		}
	}
if(p==0){
printf("No\n");
}
    return 0 ;
} 