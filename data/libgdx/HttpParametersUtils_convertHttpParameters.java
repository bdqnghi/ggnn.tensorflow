/**
 * Useful method to convert a map of key,value pairs to a String to be used as part of a GET or POST content.
 * @param parameters A Map<String, String> with the parameters to encode.
 * @return The String with the parameters encoded.
 */
public static String convertHttpParameters(Map<String, String> parameters) {
    Set<String> keySet = parameters.keySet();
    StringBuffer convertedParameters = new StringBuffer();
    for (String name : keySet) {
        convertedParameters.append(encode(name, defaultEncoding));
        convertedParameters.append(nameValueSeparator);
        convertedParameters.append(encode(parameters.get(name), defaultEncoding));
        convertedParameters.append(parameterSeparator);
    }
    if (convertedParameters.length() > 0)
        convertedParameters.deleteCharAt(convertedParameters.length() - 1);
    return convertedParameters.toString();
}
