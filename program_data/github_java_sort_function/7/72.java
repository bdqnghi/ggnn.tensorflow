    
    public static void sort(double[] array, final Abstandsfolge abstandsfolge) {

        final int laenge = array.length;

        while (abstandsfolge.hasNext()) {
            final int aktuelleSchrittweite = abstandsfolge.next().intValue();

            for (int i = aktuelleSchrittweite; i < laenge; ++i) {
                for (int j = i % aktuelleSchrittweite; j < i; j += aktuelleSchrittweite) {
                    if (array[j] > array[i]) {
                        double tmp = array[i];
                        array[i] = array[j];
                        array[j] = tmp;
                    }

                }
            }
        }

    }
