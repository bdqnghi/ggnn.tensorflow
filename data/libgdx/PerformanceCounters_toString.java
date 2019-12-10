public StringBuilder toString(final StringBuilder sb) {
    sb.setLength(0);
    for (int i = 0; i < counters.size; i++) {
        if (i != 0)
            sb.append("; ");
        counters.get(i).toString(sb);
    }
    return sb;
}
