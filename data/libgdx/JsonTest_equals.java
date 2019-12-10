public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Test1 other = (Test1) obj;
    if (BooleanField == null) {
        if (other.BooleanField != null)
            return false;
    } else if (!BooleanField.equals(other.BooleanField))
        return false;
    if (ByteField == null) {
        if (other.ByteField != null)
            return false;
    } else if (!ByteField.equals(other.ByteField))
        return false;
    if (CharacterField == null) {
        if (other.CharacterField != null)
            return false;
    } else if (!CharacterField.equals(other.CharacterField))
        return false;
    if (DoubleField == null) {
        if (other.DoubleField != null)
            return false;
    } else if (!DoubleField.equals(other.DoubleField))
        return false;
    if (FloatField == null) {
        if (other.FloatField != null)
            return false;
    } else if (!FloatField.equals(other.FloatField))
        return false;
    if (IntegerField == null) {
        if (other.IntegerField != null)
            return false;
    } else if (!IntegerField.equals(other.IntegerField))
        return false;
    if (LongField == null) {
        if (other.LongField != null)
            return false;
    } else if (!LongField.equals(other.LongField))
        return false;
    if (ShortField == null) {
        if (other.ShortField != null)
            return false;
    } else if (!ShortField.equals(other.ShortField))
        return false;
    if (stringField == null) {
        if (other.stringField != null)
            return false;
    } else if (!stringField.equals(other.stringField))
        return false;
    if (booleanField != other.booleanField)
        return false;
    Object list1 = arrayToList(byteArrayField);
    Object list2 = arrayToList(other.byteArrayField);
    if (list1 != list2) {
        if (list1 == null || list2 == null)
            return false;
        if (!list1.equals(list2))
            return false;
    }
    if (object != other.object) {
        if (object == null || other.object == null)
            return false;
        if (object != this && !object.equals(other.object))
            return false;
    }
    if (map != other.map) {
        if (map == null || other.map == null)
            return false;
        if (!map.keys().toArray().equals(other.map.keys().toArray()))
            return false;
        if (!map.values().toArray().equals(other.map.values().toArray()))
            return false;
    }
    if (array != other.array) {
        if (array == null || other.array == null)
            return false;
        if (!array.equals(other.array))
            return false;
    }
    if (byteField != other.byteField)
        return false;
    if (charField != other.charField)
        return false;
    if (Double.doubleToLongBits(doubleField) != Double.doubleToLongBits(other.doubleField))
        return false;
    if (Float.floatToIntBits(floatField) != Float.floatToIntBits(other.floatField))
        return false;
    if (intField != other.intField)
        return false;
    if (longField != other.longField)
        return false;
    if (shortField != other.shortField)
        return false;
    return true;
}
