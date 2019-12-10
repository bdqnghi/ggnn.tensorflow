private ArgumentType getArgumentType(Parameter parameter) {
    String[] typeTokens = parameter.getType().toString().split("\\.");
    String type = typeTokens[typeTokens.length - 1];
    int arrayDim = 0;
    for (int i = 0; i < type.length(); i++) {
        if (type.charAt(i) == '[')
            arrayDim++;
    }
    type = type.replace("[", "").replace("]", "");
    if (arrayDim >= 1) {
        if (arrayDim > 1)
            return ArgumentType.ObjectArray;
        ArgumentType arrayType = arrayTypes.get(type);
        if (arrayType == null) {
            return ArgumentType.ObjectArray;
        }
        return arrayType;
    }
    if (plainOldDataTypes.containsKey(type))
        return plainOldDataTypes.get(type);
    if (bufferTypes.containsKey(type))
        return bufferTypes.get(type);
    if (type.equals("String"))
        return ArgumentType.String;
    return ArgumentType.Object;
}
