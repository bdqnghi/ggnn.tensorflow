void main()
{char a=' ',b=' ';
 int i;
for (i=1;i<100;i++)
 {a=b;
  scanf("%c", &b);
  if (b==' '&&a==' ')
	  continue;
  else printf("%c", b);
  if (b=='.')
	  break;
 }
}