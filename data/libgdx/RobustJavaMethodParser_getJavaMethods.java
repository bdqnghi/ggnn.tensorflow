private void getJavaMethods(ArrayList<JavaMethod> methods, TypeDeclaration type) {
    classStack.push(type);
    if (type.getMembers() != null) {
        for (BodyDeclaration member : type.getMembers()) {
            if (member instanceof ClassOrInterfaceDeclaration || member instanceof EnumDeclaration) {
                getJavaMethods(methods, (TypeDeclaration) member);
            } else {
                if (member instanceof MethodDeclaration) {
                    MethodDeclaration method = (MethodDeclaration) member;
                    if (!ModifierSet.hasModifier(((MethodDeclaration) member).getModifiers(), ModifierSet.NATIVE))
                        continue;
                    methods.add(createMethod(method));
                }
            }
        }
    }
    classStack.pop();
}
