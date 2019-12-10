private void emitJniSetupCode(StringBuffer buffer, JavaMethod javaMethod, StringBuffer additionalArgs, StringBuffer wrapperArgs) {
    // wrapped method.
    if (javaMethod.isStatic()) {
        wrapperArgs.append("env, clazz, ");
    } else {
        wrapperArgs.append("env, object, ");
    }
    // arguments for wrapper method
    for (int i = 0; i < javaMethod.getArguments().size(); i++) {
        Argument arg = javaMethod.getArguments().get(i);
        if (!arg.getType().isPlainOldDataType() && !arg.getType().isObject()) {
            wrapperArgs.append(JNI_ARG_PREFIX);
        }
        // output the name of the argument
        wrapperArgs.append(arg.getName());
        if (i < javaMethod.getArguments().size() - 1)
            wrapperArgs.append(", ");
    }
    // direct buffer pointers
    for (Argument arg : javaMethod.getArguments()) {
        if (arg.getType().isBuffer()) {
            String type = arg.getType().getBufferCType();
            buffer.append("\t" + type + " " + arg.getName() + " = (" + type + ")(" + JNI_ARG_PREFIX + arg.getName() + "?env->GetDirectBufferAddress(" + JNI_ARG_PREFIX + arg.getName() + "):0);\n");
            additionalArgs.append(", ");
            additionalArgs.append(type);
            additionalArgs.append(" ");
            additionalArgs.append(arg.getName());
            wrapperArgs.append(", ");
            wrapperArgs.append(arg.getName());
        }
    }
    // string pointers
    for (Argument arg : javaMethod.getArguments()) {
        if (arg.getType().isString()) {
            String type = "char*";
            buffer.append("\t" + type + " " + arg.getName() + " = (" + type + ")env->GetStringUTFChars(" + JNI_ARG_PREFIX + arg.getName() + ", 0);\n");
            additionalArgs.append(", ");
            additionalArgs.append(type);
            additionalArgs.append(" ");
            additionalArgs.append(arg.getName());
            wrapperArgs.append(", ");
            wrapperArgs.append(arg.getName());
        }
    }
    // will explode into our face if we call another JNI method after that.
    for (Argument arg : javaMethod.getArguments()) {
        if (arg.getType().isPrimitiveArray()) {
            String type = arg.getType().getArrayCType();
            buffer.append("\t" + type + " " + arg.getName() + " = (" + type + ")env->GetPrimitiveArrayCritical(" + JNI_ARG_PREFIX + arg.getName() + ", 0);\n");
            additionalArgs.append(", ");
            additionalArgs.append(type);
            additionalArgs.append(" ");
            additionalArgs.append(arg.getName());
            wrapperArgs.append(", ");
            wrapperArgs.append(arg.getName());
        }
    }
    // new line for separation
    buffer.append("\n");
}
