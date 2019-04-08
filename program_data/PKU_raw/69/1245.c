

int main (void)
{
    int i, j, k, lena, lenb, carry, temp;
    char a[MAX_DIGITS+1], b[MAX_DIGITS+1], c[MAX_DIGITS+2];
    
    scanf ("%s", a);
    scanf ("%s", b);
    lena = strlen (a);
    lenb = strlen (b);
    carry = 0;
    k = 0;
    i = lena - 1;
    j = lenb - 1;
    while (i >= 0 && j >= 0) {
          temp = a[i] - '0' + b[j] - '0' + carry;
          c[k] = temp % 10 + '0';
          carry = temp / 10;
          i--, j--, k++;
    }
    
    if (i >= 0)
          while (i >= 0) {
                temp = a[i] - '0' + carry;
                c[k] = temp % 10 + '0';
                carry = temp / 10;
                i--, k++;
          }
    else if (j >= 0)
         while (j >= 0) {
               temp = b[j] - '0' + carry;
               c[k] = temp % 10 + '0';
               carry = temp / 10;
               j--, k++;
         }
         
    if (carry)
       c[k] = '1';
    else
        k--;
    
    while (c[k] == '0')
          k--;
    if (k < 0)
       printf ("0");
    else {
         while (k >= 0) {
               printf ("%c", c[k]);
               k--;
         }
    }
    
    return 0;
}
