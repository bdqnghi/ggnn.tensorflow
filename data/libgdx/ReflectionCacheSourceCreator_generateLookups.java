private void generateLookups() {
    TypeOracle typeOracle = context.getTypeOracle();
    JPackage[] packages = typeOracle.getPackages();
    // gather all types from wanted packages
    for (JPackage p : packages) {
        for (JClassType t : p.getTypes()) {
            gatherTypes(t.getErasedType(), types);
        }
    }
    // gather all types from explicitely requested packages
    try {
        ConfigurationProperty prop = context.getPropertyOracle().getConfigurationProperty("gdx.reflect.include");
        for (String s : prop.getValues()) {
            JClassType type = typeOracle.findType(s);
            if (type != null)
                gatherTypes(type.getErasedType(), types);
        }
    } catch (BadPropertyValueException e) {
    }
    gatherTypes(typeOracle.findType("java.util.List").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.util.ArrayList").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.util.HashMap").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.util.Map").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.String").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Boolean").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Byte").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Long").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Character").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Short").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Integer").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Float").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.CharSequence").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Double").getErasedType(), types);
    gatherTypes(typeOracle.findType("java.lang.Object").getErasedType(), types);
    // sort the types so the generated output will be stable between runs
    Collections.sort(types, new Comparator<JType>() {

        public int compare(JType o1, JType o2) {
            return o1.getQualifiedSourceName().compareTo(o2.getQualifiedSourceName());
        }
    });
    // generate Type lookup generator methods.
    for (JType t : types) {
        p(createTypeGenerator(t));
    }
    // generate reusable parameter objects
    parameterInitialization();
    // sort the stubs so the generated output will be stable between runs
    Collections.sort(setterGetterStubs, new Comparator<SetterGetterStub>() {

        @Override
        public int compare(SetterGetterStub o1, SetterGetterStub o2) {
            return new Integer(o1.setter).compareTo(o2.setter);
        }
    });
    // generate field setters/getters
    for (SetterGetterStub stub : setterGetterStubs) {
        String stubSource = generateSetterGetterStub(stub);
        if (stubSource.equals(""))
            stub.unused = true;
        p(stubSource);
    }
    // sort the stubs so the generated output will be stable between runs
    Collections.sort(methodStubs, new Comparator<MethodStub>() {

        @Override
        public int compare(MethodStub o1, MethodStub o2) {
            return new Integer(o1.methodId).compareTo(o2.methodId);
        }
    });
    // generate methods
    for (MethodStub stub : methodStubs) {
        String stubSource = generateMethodStub(stub);
        if (stubSource.equals(""))
            stub.unused = true;
        p(stubSource);
    }
    logger.log(Type.INFO, types.size() + " types reflected");
}
