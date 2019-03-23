
    public static void intercambiar(int i, int j) {
        int aux = lista.get(i);
        lista.set(i, lista.get(j));
        lista.set(j, aux);
    }
    

    public void shellsort() {
        int intervalo, i, j, k;
        int n = lista.size();
        intervalo = n / 2;
        while (intervalo > 0) {
            for (i = intervalo; i < n; i++) {
                j = i - intervalo;
                while (j >= 0) {
                    k = j + intervalo;
                    if (lista.get(j) <= lista.get(k)) {
                        j = -1; 
                    } else {
                        intercambiar(j, j + 1);
                        j -= intervalo;
                    }
                }
            }
            intervalo = intervalo / 2;
        }
    }