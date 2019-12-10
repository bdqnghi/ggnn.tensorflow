private void emitJniCleanupCode(StringBuffer buffer, JavaMethod javaMethod, CMethod cMethod) {
    // emit cleanup code for arrays, must come first
    for (Argument arg : javaMethod.getArguments()) {
        if (arg.getType().isPrimitiveArray()) {
            buffer.append("\tenv->ReleasePrimitiveArrayCritical(" + JNI_ARG_PREFIX + arg.getName() + ", " + arg.getName() + ", 0);\n");
        }
    }
    // emit cleanup code for strings
    for (Argument arg : javaMethod.getArguments()) {
        if (arg.getType().isString()) {
            buffer.append("\tenv->ReleaseStringUTFChars(" + JNI_ARG_PREFIX + arg.getName() + ", " + arg.getName() + ");\n");
        }
    }
    // new line for separation
    buffer.append("\n");
}
