private static void selectionsort(double tablica[], int ile_liczb) {
    int min,i,j;
    double temp;
    for (i=0;i<ile_liczb-1;i++)  {
    min=i;
    for (j=i+1;j<ile_liczb;j++)
    if (tablica[j]<tablica[min])
    min=j;
    temp=tablica[min];
    tablica[min]=tablica[i];
    tablica[i]=temp;
    }
}