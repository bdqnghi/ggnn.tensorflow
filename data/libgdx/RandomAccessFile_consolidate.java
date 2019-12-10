void consolidate() {
    if (newData == null) {
        return;
    }
    if (data.length() < newDataPos) {
        StringBuilder filler = new StringBuilder();
        while (data.length() + filler.length() < newDataPos) {
            filler.append('\0');
        }
        // System.out.println("padding " + (filler.length()) + " zeros in consolidate ");
        data += filler.toString();
    }
    int p2 = newDataPos + newData.length();
    data = data.substring(0, newDataPos) + newData.toString() + (p2 < data.length() ? data.substring(p2) : "");
    newData = null;
}
