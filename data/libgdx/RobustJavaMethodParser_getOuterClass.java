private TypeDeclaration getOuterClass(CompilationUnit unit) {
    for (TypeDeclaration type : unit.getTypes()) {
        if (type instanceof ClassOrInterfaceDeclaration || type instanceof EnumDeclaration)
            return type;
    }
    throw new RuntimeException("Couldn't find class, is your java file empty?");
}
