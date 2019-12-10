private static String quote(Object params, boolean spaceAfter) {
    if (BitmapFontWriter.getOutputFormat() == OutputFormat.XML)
        return "\"" + params.toString().trim() + "\"" + (spaceAfter ? " " : "");
    else
        return params.toString();
}
