/**
 * Rotate an array, see std::rotate
 */
public static void rotate(float[] ray, int first, int new_first, int last) {
    int next = new_first;
    while (next != first) {
        float temp = ray[first];
        ray[first] = ray[next];
        ray[next] = temp;
        first++;
        next++;
        if (next == last) {
            next = new_first;
        } else if (first == new_first) {
            new_first = next;
        }
    }
}
