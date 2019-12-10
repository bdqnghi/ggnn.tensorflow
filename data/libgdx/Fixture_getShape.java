/*
		b2Fixture* fixture = (b2Fixture*)addr;
		b2Shape::Type type = fixture->GetType();
		switch( type )
		{
		case b2Shape::e_circle: return 0;
		case b2Shape::e_edge: return 1;
		case b2Shape::e_polygon: return 2;
		case b2Shape::e_chain: return 3;
		default:
			return -1;
		}
	*/
/**
 * Returns the shape of this fixture
 */
public Shape getShape() {
    if (shape == null) {
        long shapeAddr = jniGetShape(addr);
        if (shapeAddr == 0)
            throw new GdxRuntimeException("Null shape address!");
        int type = Shape.jniGetType(shapeAddr);
        switch(type) {
            case 0:
                shape = new CircleShape(shapeAddr);
                break;
            case 1:
                shape = new EdgeShape(shapeAddr);
                break;
            case 2:
                shape = new PolygonShape(shapeAddr);
                break;
            case 3:
                shape = new ChainShape(shapeAddr);
                break;
            default:
                throw new GdxRuntimeException("Unknown shape type!");
        }
    }
    return shape;
}
