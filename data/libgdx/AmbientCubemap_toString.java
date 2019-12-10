@Override
public String toString() {
    String result = "";
    for (int i = 0; i < data.length; i += 3) {
        result += Float.toString(data[i]) + ", " + Float.toString(data[i + 1]) + ", " + Float.toString(data[i + 2]) + "\n";
    }
    return result;
}
