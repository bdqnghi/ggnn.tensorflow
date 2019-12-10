@Override
public String generate(TreeLogger logger, GeneratorContext context, String typeName) throws UnableToCompleteException {
    TypeOracle oracle = context.getTypeOracle();
    assert (oracle != null);
    JClassType type = oracle.findType(typeName);
    if (type == null) {
        logger.log(ERROR, "Couldn't find type '" + typeName + "'");
        throw new UnableToCompleteException();
    }
    if (type.isInterface() == null) {
        logger.log(ERROR, "Type '" + typeName + "' must be an interface");
        throw new UnableToCompleteException();
    }
    ReflectionCacheSourceCreator source = new ReflectionCacheSourceCreator(logger, context, type);
    return source.create();
}
