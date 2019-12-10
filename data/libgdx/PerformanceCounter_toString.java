/**
 * Creates a string in the form of "name [time: value, load: value]"
 */
public StringBuilder toString(final StringBuilder sb) {
    sb.append(name).append(": [time: ").append(time.value).append(", load: ").append(load.value).append("]");
    return sb;
}
