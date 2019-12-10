public StringBuilder append(StringBuilder builder, int start, int end) {
    if (builder == null)
        appendNull();
    else
        append0(builder.chars, start, end);
    return this;
}
