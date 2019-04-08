int main()
{
    char sen[1000],a[1000],b[1000],end[2000];
	int i,j,lensen,lena,lenb;
    sen[0]=' '; 
	a[0]=' '; 
	b[0]=' ';
    gets(&sen[1]);
    cin>>&a[1]>>&b[1];

    lensen=strlen(sen)+1;
    lena=strlen(a)+1;
    lenb=strlen(b)+1;

    sen[lensen-1]=a[lena-1]=b[lenb-1]=' ';
    sen[lensen]=a[lena]=b[lenb]='\0';

    
    for(i=0,j=0;i<lensen;++i,++j)
    {
        if (strncmp(sen+i,a,lena) == 0)
        {
            strcpy(end+j,b);
            i = i+lena-1;
            j = j+lenb-1;
        }
        else
      {
            end[j] =sen[i];
        }
    }

    end[j-1] = 0;
    cout<<&end[1]<<endl;
    return 0;
}
