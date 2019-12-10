private JavaMethod createMethod(MethodDeclaration method) {
    String className = classStack.peek().getName();
    String name = method.getName();
    boolean isStatic = ModifierSet.hasModifier(method.getModifiers(), ModifierSet.STATIC);
    String returnType = method.getType().toString();
    ArrayList<Argument> arguments = new ArrayList<Argument>();
    if (method.getParameters() != null) {
        for (Parameter parameter : method.getParameters()) {
            arguments.add(new Argument(getArgumentType(parameter), parameter.getId().getName()));
        }
    }
    return new JavaMethod(className, name, isStatic, returnType, null, arguments, method.getBeginLine(), method.getEndLine());
}
