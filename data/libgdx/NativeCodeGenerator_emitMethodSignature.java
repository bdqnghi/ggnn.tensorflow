private String emitMethodSignature(StringBuffer buffer, JavaMethod javaMethod, CMethod cMethod, String additionalArguments, boolean appendPrefix) {
    // emit head, consisting of JNIEXPORT,return type and method name
    // if this is a wrapped method, prefix the method name
    String wrappedMethodName = null;
    if (additionalArguments != null) {
        String[] tokens = cMethod.getHead().replace("\r\n", "").replace("\n", "").split(" ");
        wrappedMethodName = JNI_WRAPPER_PREFIX + tokens[3];
        buffer.append("static inline ");
        buffer.append(tokens[1]);
        buffer.append(" ");
        buffer.append(wrappedMethodName);
        buffer.append("\n");
    } else {
        buffer.append(cMethod.getHead());
    }
    // Differentiate between static and instance method, then output each argument
    if (javaMethod.isStatic()) {
        buffer.append("(JNIEnv* env, jclass clazz");
    } else {
        buffer.append("(JNIEnv* env, jobject object");
    }
    if (javaMethod.getArguments().size() > 0)
        buffer.append(", ");
    for (int i = 0; i < javaMethod.getArguments().size(); i++) {
        // output the argument type as defined in the header
        buffer.append(cMethod.getArgumentTypes()[i + 2]);
        buffer.append(" ");
        // if this is not a POD or an object, we need to add a prefix
        // as we will output JNI code to get pointers to strings, arrays
        // and direct buffers.
        Argument javaArg = javaMethod.getArguments().get(i);
        if (!javaArg.getType().isPlainOldDataType() && !javaArg.getType().isObject() && appendPrefix) {
            buffer.append(JNI_ARG_PREFIX);
        }
        // output the name of the argument
        buffer.append(javaArg.getName());
        // comma, if this is not the last argument
        if (i < javaMethod.getArguments().size() - 1)
            buffer.append(", ");
    }
    // if this is a wrapper method signature, add the additional arguments
    if (additionalArguments != null) {
        buffer.append(additionalArguments);
    }
    // close signature, open method body
    buffer.append(") {\n");
    // return the wrapped method name if any
    return wrappedMethodName;
}
