
char str[100];

search (int n)
{
     char *p1,*p2,*p,*p3,*p4;
     int max,min;
	 p1=&str[0]; max=0; min=100;
	 for (p=&str[0];p<=&str[n];p++)
	 {
	     if ((*p<65) || ((*p>90) && (*p<97)) || (*p>122) || (p==&str[n]))
		 {
			 if ((p-p1)>max) {max=p-p1; p3=p1; }
             if ((p-p1)<min) {min=p-p1; p4=p1; }
			 p++; p1=p;
		 }
	 }
     for (p=p3;p<p3+max;p++) printf ("%c",*p);
	 printf ("\n");
     for (p=p4;p<p4+min;p++) printf ("%c",*p);
	 printf ("\n");
}

int main ()
{
    int lenth;
	gets(str);
	lenth=strlen(str);
	search (lenth);

}