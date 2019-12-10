protected Json getJsonLoader(final FileHandle skinFile) {
    final Skin skin = this;
    final Json json = new Json() {

        public <T> T readValue(Class<T> type, Class elementType, JsonValue jsonData) {
            // If the JSON is a string but the type is not, look up the actual value by name.
            if (jsonData.isString() && !ClassReflection.isAssignableFrom(CharSequence.class, type))
                return get(jsonData.asString(), type);
            return super.readValue(type, elementType, jsonData);
        }
    };
    json.setTypeName(null);
    json.setUsePrototypes(false);
    json.setSerializer(Skin.class, new ReadOnlySerializer<Skin>() {

        public Skin read(Json json, JsonValue typeToValueMap, Class ignored) {
            for (JsonValue valueMap = typeToValueMap.child; valueMap != null; valueMap = valueMap.next) {
                try {
                    readNamedObjects(json, ClassReflection.forName(valueMap.name()), valueMap);
                } catch (ReflectionException ex) {
                    throw new SerializationException(ex);
                }
            }
            return skin;
        }

        private void readNamedObjects(Json json, Class type, JsonValue valueMap) {
            Class addType = type == TintedDrawable.class ? Drawable.class : type;
            for (JsonValue valueEntry = valueMap.child; valueEntry != null; valueEntry = valueEntry.next) {
                Object object = json.readValue(type, valueEntry);
                if (object == null)
                    continue;
                try {
                    add(valueEntry.name, object, addType);
                    if (addType != Drawable.class && ClassReflection.isAssignableFrom(Drawable.class, addType))
                        add(valueEntry.name, object, Drawable.class);
                } catch (Exception ex) {
                    throw new SerializationException("Error reading " + ClassReflection.getSimpleName(type) + ": " + valueEntry.name, ex);
                }
            }
        }
    });
    json.setSerializer(BitmapFont.class, new ReadOnlySerializer<BitmapFont>() {

        public BitmapFont read(Json json, JsonValue jsonData, Class type) {
            String path = json.readValue("file", String.class, jsonData);
            int scaledSize = json.readValue("scaledSize", int.class, -1, jsonData);
            Boolean flip = json.readValue("flip", Boolean.class, false, jsonData);
            Boolean markupEnabled = json.readValue("markupEnabled", Boolean.class, false, jsonData);
            FileHandle fontFile = skinFile.parent().child(path);
            if (!fontFile.exists())
                fontFile = Gdx.files.internal(path);
            if (!fontFile.exists())
                throw new SerializationException("Font file not found: " + fontFile);
            // Use a region with the same name as the font, else use a PNG file in the same directory as the FNT file.
            String regionName = fontFile.nameWithoutExtension();
            try {
                BitmapFont font;
                TextureRegion region = skin.optional(regionName, TextureRegion.class);
                if (region != null)
                    font = new BitmapFont(fontFile, region, flip);
                else {
                    FileHandle imageFile = fontFile.parent().child(regionName + ".png");
                    if (imageFile.exists())
                        font = new BitmapFont(fontFile, imageFile, flip);
                    else
                        font = new BitmapFont(fontFile, flip);
                }
                font.getData().markupEnabled = markupEnabled;
                // Scaled size is the desired cap height to scale the font to.
                if (scaledSize != -1)
                    font.getData().setScale(scaledSize / font.getCapHeight());
                return font;
            } catch (RuntimeException ex) {
                throw new SerializationException("Error loading bitmap font: " + fontFile, ex);
            }
        }
    });
    json.setSerializer(Color.class, new ReadOnlySerializer<Color>() {

        public Color read(Json json, JsonValue jsonData, Class type) {
            if (jsonData.isString())
                return get(jsonData.asString(), Color.class);
            String hex = json.readValue("hex", String.class, (String) null, jsonData);
            if (hex != null)
                return Color.valueOf(hex);
            float r = json.readValue("r", float.class, 0f, jsonData);
            float g = json.readValue("g", float.class, 0f, jsonData);
            float b = json.readValue("b", float.class, 0f, jsonData);
            float a = json.readValue("a", float.class, 1f, jsonData);
            return new Color(r, g, b, a);
        }
    });
    json.setSerializer(TintedDrawable.class, new ReadOnlySerializer() {

        public Object read(Json json, JsonValue jsonData, Class type) {
            String name = json.readValue("name", String.class, jsonData);
            Color color = json.readValue("color", Color.class, jsonData);
            Drawable drawable = newDrawable(name, color);
            if (drawable instanceof BaseDrawable) {
                BaseDrawable named = (BaseDrawable) drawable;
                named.setName(jsonData.name + " (" + name + ", " + color + ")");
            }
            return drawable;
        }
    });
    return json;
}
