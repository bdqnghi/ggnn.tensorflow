private CMethod findCMethod(JavaMethod javaMethod, ArrayList<CMethod> cMethods) {
    for (CMethod cMethod : cMethods) {
        if (cMethod.getHead().endsWith(javaMethod.getClassName() + "_" + javaMethod.getName()) || cMethod.getHead().contains(javaMethod.getClassName() + "_" + javaMethod.getName() + "__")) {
            // FIXME float test[] won't work, needs to be float[] test.
            if (cMethod.getArgumentTypes().length - 2 == javaMethod.getArguments().size()) {
                boolean match = true;
                for (int i = 2; i < cMethod.getArgumentTypes().length; i++) {
                    String cType = cMethod.getArgumentTypes()[i];
                    String javaType = javaMethod.getArguments().get(i - 2).getType().getJniType();
                    if (!cType.equals(javaType)) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    return cMethod;
                }
            }
        }
    }
    return null;
}
