private String getAnnotations(Annotation[] annotations) {
    if (annotations != null && annotations.length > 0) {
        int numValidAnnotations = 0;
        final Class<?>[] ignoredAnnotations = { Deprecated.class, Retention.class };
        StringBuilder b = new StringBuilder();
        b.append("new java.lang.annotation.Annotation[] {");
        for (Annotation annotation : annotations) {
            Class<?> type = annotation.annotationType();
            // skip ignored types, assuming we are not interested in those at runtime
            boolean ignoredType = false;
            for (int i = 0; !ignoredType && i < ignoredAnnotations.length; i++) {
                ignoredType = ignoredAnnotations[i].equals(type);
            }
            if (ignoredType) {
                continue;
            }
            // skip if not annotated with RetentionPolicy.RUNTIME
            Retention retention = type.getAnnotation(Retention.class);
            if (retention == null || retention.value() != RetentionPolicy.RUNTIME) {
                continue;
            }
            numValidAnnotations++;
            // anonymous class
            b.append(" new ").append(type.getCanonicalName()).append("() {");
            // override all methods
            Method[] methods = type.getDeclaredMethods();
            for (Method method : methods) {
                Class<?> returnType = method.getReturnType();
                b.append(" @Override public");
                b.append(" ").append(returnType.getCanonicalName());
                b.append(" ").append(method.getName()).append("() { return");
                if (returnType.isArray()) {
                    b.append(" new ").append(returnType.getCanonicalName()).append(" {");
                }
                // invoke the annotation method
                Object invokeResult = null;
                try {
                    invokeResult = method.invoke(annotation);
                } catch (IllegalAccessException e) {
                    logger.log(Type.ERROR, "Error invoking annotation method.");
                } catch (InvocationTargetException e) {
                    logger.log(Type.ERROR, "Error invoking annotation method.");
                }
                // write result as return value
                if (invokeResult != null) {
                    if (returnType.equals(String[].class)) {
                        // String[]
                        for (String s : (String[]) invokeResult) {
                            b.append(" \"").append(s).append("\",");
                        }
                    } else if (returnType.equals(String.class)) {
                        // String
                        b.append(" \"").append((String) invokeResult).append("\"");
                    } else if (returnType.equals(Class[].class)) {
                        // Class[]
                        for (Class c : (Class[]) invokeResult) {
                            b.append(" ").append(c.getCanonicalName()).append(".class,");
                        }
                    } else if (returnType.equals(Class.class)) {
                        // Class
                        b.append(" ").append(((Class) invokeResult).getCanonicalName()).append(".class");
                    } else if (returnType.isArray() && returnType.getComponentType().isEnum()) {
                        // enum[]
                        String enumTypeName = returnType.getComponentType().getCanonicalName();
                        int length = Array.getLength(invokeResult);
                        for (int i = 0; i < length; i++) {
                            Object e = Array.get(invokeResult, i);
                            b.append(" ").append(enumTypeName).append(".").append(e.toString()).append(",");
                        }
                    } else if (returnType.isEnum()) {
                        // enum
                        b.append(" ").append(returnType.getCanonicalName()).append(".").append(invokeResult.toString());
                    } else if (returnType.isArray() && returnType.getComponentType().isPrimitive()) {
                        // primitive []
                        Class<?> primitiveType = returnType.getComponentType();
                        int length = Array.getLength(invokeResult);
                        for (int i = 0; i < length; i++) {
                            Object n = Array.get(invokeResult, i);
                            b.append(" ").append(n.toString());
                            if (primitiveType.equals(float.class)) {
                                b.append("f");
                            }
                            b.append(",");
                        }
                    } else if (returnType.isPrimitive()) {
                        // primitive
                        b.append(" ").append(invokeResult.toString());
                        if (returnType.equals(float.class)) {
                            b.append("f");
                        }
                    } else {
                        logger.log(Type.ERROR, "Return type not supported (or not yet implemented).");
                    }
                }
                if (returnType.isArray()) {
                    b.append(" }");
                }
                b.append("; ");
                b.append("}");
            }
            // must override annotationType()
            b.append(" @Override public Class<? extends java.lang.annotation.Annotation> annotationType() { return ");
            b.append(type.getCanonicalName());
            b.append(".class; }");
            b.append("}, ");
        }
        b.append("}");
        return (numValidAnnotations > 0) ? b.toString() : "null";
    }
    return "null";
}
