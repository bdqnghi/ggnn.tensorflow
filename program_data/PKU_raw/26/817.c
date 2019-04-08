int main (){
char t[150],x[150];
char *pt=t,*px=x;
gets(t);
for (;*pt!='\0';pt++,px++){
	if ((*pt!=' ')||((*pt=' ')&&(*(pt-1)!=' '))){
		
	*px=*pt;	
	}
	else {px--;}

}
*px='\0';
printf ("%s",x);
return 0;
}