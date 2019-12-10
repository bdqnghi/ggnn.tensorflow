private void emitJavaMethod(StringBuffer buffer, JavaMethod javaMethod, CMethod cMethod) {
    // get the setup and cleanup code for arrays, buffers and strings
    StringBuffer jniSetupCode = new StringBuffer();
    StringBuffer jniCleanupCode = new StringBuffer();
    StringBuffer additionalArgs = new StringBuffer();
    StringBuffer wrapperArgs = new StringBuffer();
    emitJniSetupCode(jniSetupCode, javaMethod, additionalArgs, wrapperArgs);
    emitJniCleanupCode(jniCleanupCode, javaMethod, cMethod);
    // check if the user wants to do manual setup of JNI args
    boolean isManual = javaMethod.isManual();
    // in the native code (conservative, not syntactically checked), emit a wrapper method.
    if (javaMethod.hasDisposableArgument() && javaMethod.getNativeCode().contains("return")) {
        // user do whatever she wants.
        if (isManual) {
            emitMethodSignature(buffer, javaMethod, cMethod, null, false);
            emitMethodBody(buffer, javaMethod);
            buffer.append("}\n\n");
        } else {
            // emit the method containing the actual code, called by the wrapper
            // method with setup pointers to arrays, buffers and strings
            String wrappedMethodName = emitMethodSignature(buffer, javaMethod, cMethod, additionalArgs.toString());
            emitMethodBody(buffer, javaMethod);
            buffer.append("}\n\n");
            // emit the wrapper method, the one with the declaration in the header file
            emitMethodSignature(buffer, javaMethod, cMethod, null);
            if (!isManual) {
                buffer.append(jniSetupCode);
            }
            if (cMethod.getReturnType().equals("void")) {
                buffer.append("\t" + wrappedMethodName + "(" + wrapperArgs.toString() + ");\n\n");
                if (!isManual) {
                    buffer.append(jniCleanupCode);
                }
                buffer.append("\treturn;\n");
            } else {
                buffer.append("\t" + cMethod.getReturnType() + " " + JNI_RETURN_VALUE + " = " + wrappedMethodName + "(" + wrapperArgs.toString() + ");\n\n");
                if (!isManual) {
                    buffer.append(jniCleanupCode);
                }
                buffer.append("\treturn " + JNI_RETURN_VALUE + ";\n");
            }
            buffer.append("}\n\n");
        }
    } else {
        emitMethodSignature(buffer, javaMethod, cMethod, null);
        if (!isManual) {
            buffer.append(jniSetupCode);
        }
        emitMethodBody(buffer, javaMethod);
        if (!isManual) {
            buffer.append(jniCleanupCode);
        }
        buffer.append("}\n\n");
    }
}
