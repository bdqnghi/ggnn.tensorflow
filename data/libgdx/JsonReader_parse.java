public JsonValue parse(char[] data, int offset, int length) {
    int cs, p = offset, pe = length, eof = pe, top = 0;
    int[] stack = new int[4];
    int s = 0;
    Array<String> names = new Array(8);
    boolean needsUnescape = false, stringIsName = false, stringIsUnquoted = false;
    RuntimeException parseRuntimeEx = null;
    boolean debug = false;
    if (debug)
        System.out.println();
    try {
        // line 3 "JsonReader.java"
        {
            cs = json_start;
            top = 0;
        }
        // line 8 "JsonReader.java"
        {
            int _klen;
            int _trans = 0;
            int _acts;
            int _nacts;
            int _keys;
            int _goto_targ = 0;
            _goto: while (true) {
                switch(_goto_targ) {
                    case 0:
                        if (p == pe) {
                            _goto_targ = 4;
                            continue _goto;
                        }
                        if (cs == 0) {
                            _goto_targ = 5;
                            continue _goto;
                        }
                    case 1:
                        _match: do {
                            _keys = _json_key_offsets[cs];
                            _trans = _json_index_offsets[cs];
                            _klen = _json_single_lengths[cs];
                            if (_klen > 0) {
                                int _lower = _keys;
                                int _mid;
                                int _upper = _keys + _klen - 1;
                                while (true) {
                                    if (_upper < _lower)
                                        break;
                                    _mid = _lower + ((_upper - _lower) >> 1);
                                    if (data[p] < _json_trans_keys[_mid])
                                        _upper = _mid - 1;
                                    else if (data[p] > _json_trans_keys[_mid])
                                        _lower = _mid + 1;
                                    else {
                                        _trans += (_mid - _keys);
                                        break _match;
                                    }
                                }
                                _keys += _klen;
                                _trans += _klen;
                            }
                            _klen = _json_range_lengths[cs];
                            if (_klen > 0) {
                                int _lower = _keys;
                                int _mid;
                                int _upper = _keys + (_klen << 1) - 2;
                                while (true) {
                                    if (_upper < _lower)
                                        break;
                                    _mid = _lower + (((_upper - _lower) >> 1) & ~1);
                                    if (data[p] < _json_trans_keys[_mid])
                                        _upper = _mid - 2;
                                    else if (data[p] > _json_trans_keys[_mid + 1])
                                        _lower = _mid + 2;
                                    else {
                                        _trans += ((_mid - _keys) >> 1);
                                        break _match;
                                    }
                                }
                                _trans += _klen;
                            }
                        } while (false);
                        _trans = _json_indicies[_trans];
                        cs = _json_trans_targs[_trans];
                        if (_json_trans_actions[_trans] != 0) {
                            _acts = _json_trans_actions[_trans];
                            _nacts = (int) _json_actions[_acts++];
                            while (_nacts-- > 0) {
                                switch(_json_actions[_acts++]) {
                                    case 0:
                                        // line 104 "JsonReader.rl"
                                        {
                                            stringIsName = true;
                                        }
                                        break;
                                    case 1:
                                        // line 107 "JsonReader.rl"
                                        {
                                            String value = new String(data, s, p - s);
                                            if (needsUnescape)
                                                value = unescape(value);
                                            outer: if (stringIsName) {
                                                stringIsName = false;
                                                if (debug)
                                                    System.out.println("name: " + value);
                                                names.add(value);
                                            } else {
                                                String name = names.size > 0 ? names.pop() : null;
                                                if (stringIsUnquoted) {
                                                    if (value.equals("true")) {
                                                        if (debug)
                                                            System.out.println("boolean: " + name + "=true");
                                                        bool(name, true);
                                                        break outer;
                                                    } else if (value.equals("false")) {
                                                        if (debug)
                                                            System.out.println("boolean: " + name + "=false");
                                                        bool(name, false);
                                                        break outer;
                                                    } else if (value.equals("null")) {
                                                        string(name, null);
                                                        break outer;
                                                    }
                                                    boolean couldBeDouble = false, couldBeLong = true;
                                                    outer2: for (int i = s; i < p; i++) {
                                                        switch(data[i]) {
                                                            case '0':
                                                            case '1':
                                                            case '2':
                                                            case '3':
                                                            case '4':
                                                            case '5':
                                                            case '6':
                                                            case '7':
                                                            case '8':
                                                            case '9':
                                                            case '-':
                                                            case '+':
                                                                break;
                                                            case '.':
                                                            case 'e':
                                                            case 'E':
                                                                couldBeDouble = true;
                                                                couldBeLong = false;
                                                                break;
                                                            default:
                                                                couldBeDouble = false;
                                                                couldBeLong = false;
                                                                break outer2;
                                                        }
                                                    }
                                                    if (couldBeDouble) {
                                                        try {
                                                            if (debug)
                                                                System.out.println("double: " + name + "=" + Double.parseDouble(value));
                                                            number(name, Double.parseDouble(value), value);
                                                            break outer;
                                                        } catch (NumberFormatException ignored) {
                                                        }
                                                    } else if (couldBeLong) {
                                                        if (debug)
                                                            System.out.println("double: " + name + "=" + Double.parseDouble(value));
                                                        try {
                                                            number(name, Long.parseLong(value), value);
                                                            break outer;
                                                        } catch (NumberFormatException ignored) {
                                                        }
                                                    }
                                                }
                                                if (debug)
                                                    System.out.println("string: " + name + "=" + value);
                                                string(name, value);
                                            }
                                            stringIsUnquoted = false;
                                            s = p;
                                        }
                                        break;
                                    case 2:
                                        // line 181 "JsonReader.rl"
                                        {
                                            String name = names.size > 0 ? names.pop() : null;
                                            if (debug)
                                                System.out.println("startObject: " + name);
                                            startObject(name);
                                            {
                                                if (top == stack.length) {
                                                    int[] newStack = new int[stack.length * 2];
                                                    System.arraycopy(stack, 0, newStack, 0, stack.length);
                                                    stack = newStack;
                                                }
                                                {
                                                    stack[top++] = cs;
                                                    cs = 5;
                                                    _goto_targ = 2;
                                                    if (true)
                                                        continue _goto;
                                                }
                                            }
                                        }
                                        break;
                                    case 3:
                                        // line 187 "JsonReader.rl"
                                        {
                                            if (debug)
                                                System.out.println("endObject");
                                            pop();
                                            {
                                                cs = stack[--top];
                                                _goto_targ = 2;
                                                if (true)
                                                    continue _goto;
                                            }
                                        }
                                        break;
                                    case 4:
                                        // line 192 "JsonReader.rl"
                                        {
                                            String name = names.size > 0 ? names.pop() : null;
                                            if (debug)
                                                System.out.println("startArray: " + name);
                                            startArray(name);
                                            {
                                                if (top == stack.length) {
                                                    int[] newStack = new int[stack.length * 2];
                                                    System.arraycopy(stack, 0, newStack, 0, stack.length);
                                                    stack = newStack;
                                                }
                                                {
                                                    stack[top++] = cs;
                                                    cs = 23;
                                                    _goto_targ = 2;
                                                    if (true)
                                                        continue _goto;
                                                }
                                            }
                                        }
                                        break;
                                    case 5:
                                        // line 198 "JsonReader.rl"
                                        {
                                            if (debug)
                                                System.out.println("endArray");
                                            pop();
                                            {
                                                cs = stack[--top];
                                                _goto_targ = 2;
                                                if (true)
                                                    continue _goto;
                                            }
                                        }
                                        break;
                                    case 6:
                                        // line 203 "JsonReader.rl"
                                        {
                                            int start = p - 1;
                                            if (data[p++] == '/') {
                                                while (p != eof && data[p] != '\n') p++;
                                                p--;
                                            } else {
                                                while (p + 1 < eof && data[p] != '*' || data[p + 1] != '/') p++;
                                                p++;
                                            }
                                            if (debug)
                                                System.out.println("comment " + new String(data, start, p - start));
                                        }
                                        break;
                                    case 7:
                                        // line 216 "JsonReader.rl"
                                        {
                                            if (debug)
                                                System.out.println("unquotedChars");
                                            s = p;
                                            needsUnescape = false;
                                            stringIsUnquoted = true;
                                            if (stringIsName) {
                                                outer: while (true) {
                                                    switch(data[p]) {
                                                        case '\\':
                                                            needsUnescape = true;
                                                            break;
                                                        case '/':
                                                            if (p + 1 == eof)
                                                                break;
                                                            char c = data[p + 1];
                                                            if (c == '/' || c == '*')
                                                                break outer;
                                                            break;
                                                        case ':':
                                                        case '\r':
                                                        case '\n':
                                                            break outer;
                                                    }
                                                    if (debug)
                                                        System.out.println("unquotedChar (name): '" + data[p] + "'");
                                                    p++;
                                                    if (p == eof)
                                                        break;
                                                }
                                            } else {
                                                outer: while (true) {
                                                    switch(data[p]) {
                                                        case '\\':
                                                            needsUnescape = true;
                                                            break;
                                                        case '/':
                                                            if (p + 1 == eof)
                                                                break;
                                                            char c = data[p + 1];
                                                            if (c == '/' || c == '*')
                                                                break outer;
                                                            break;
                                                        case '}':
                                                        case ']':
                                                        case ',':
                                                        case '\r':
                                                        case '\n':
                                                            break outer;
                                                    }
                                                    if (debug)
                                                        System.out.println("unquotedChar (value): '" + data[p] + "'");
                                                    p++;
                                                    if (p == eof)
                                                        break;
                                                }
                                            }
                                            p--;
                                            while (data[p] == ' ') p--;
                                        }
                                        break;
                                    case 8:
                                        // line 270 "JsonReader.rl"
                                        {
                                            if (debug)
                                                System.out.println("quotedChars");
                                            s = ++p;
                                            needsUnescape = false;
                                            outer: while (true) {
                                                switch(data[p]) {
                                                    case '\\':
                                                        needsUnescape = true;
                                                        p++;
                                                        break;
                                                    case '"':
                                                        break outer;
                                                }
                                                // if (debug) System.out.println("quotedChar: '" + data[p] + "'");
                                                p++;
                                                if (p == eof)
                                                    break;
                                            }
                                            p--;
                                        }
                                        break;
                                }
                            }
                        }
                    case 2:
                        if (cs == 0) {
                            _goto_targ = 5;
                            continue _goto;
                        }
                        if (++p != pe) {
                            _goto_targ = 1;
                            continue _goto;
                        }
                    case 4:
                        if (p == eof) {
                            int __acts = _json_eof_actions[cs];
                            int __nacts = (int) _json_actions[__acts++];
                            while (__nacts-- > 0) {
                                switch(_json_actions[__acts++]) {
                                    case 1:
                                        // line 107 "JsonReader.rl"
                                        {
                                            String value = new String(data, s, p - s);
                                            if (needsUnescape)
                                                value = unescape(value);
                                            outer: if (stringIsName) {
                                                stringIsName = false;
                                                if (debug)
                                                    System.out.println("name: " + value);
                                                names.add(value);
                                            } else {
                                                String name = names.size > 0 ? names.pop() : null;
                                                if (stringIsUnquoted) {
                                                    if (value.equals("true")) {
                                                        if (debug)
                                                            System.out.println("boolean: " + name + "=true");
                                                        bool(name, true);
                                                        break outer;
                                                    } else if (value.equals("false")) {
                                                        if (debug)
                                                            System.out.println("boolean: " + name + "=false");
                                                        bool(name, false);
                                                        break outer;
                                                    } else if (value.equals("null")) {
                                                        string(name, null);
                                                        break outer;
                                                    }
                                                    boolean couldBeDouble = false, couldBeLong = true;
                                                    outer2: for (int i = s; i < p; i++) {
                                                        switch(data[i]) {
                                                            case '0':
                                                            case '1':
                                                            case '2':
                                                            case '3':
                                                            case '4':
                                                            case '5':
                                                            case '6':
                                                            case '7':
                                                            case '8':
                                                            case '9':
                                                            case '-':
                                                            case '+':
                                                                break;
                                                            case '.':
                                                            case 'e':
                                                            case 'E':
                                                                couldBeDouble = true;
                                                                couldBeLong = false;
                                                                break;
                                                            default:
                                                                couldBeDouble = false;
                                                                couldBeLong = false;
                                                                break outer2;
                                                        }
                                                    }
                                                    if (couldBeDouble) {
                                                        try {
                                                            if (debug)
                                                                System.out.println("double: " + name + "=" + Double.parseDouble(value));
                                                            number(name, Double.parseDouble(value), value);
                                                            break outer;
                                                        } catch (NumberFormatException ignored) {
                                                        }
                                                    } else if (couldBeLong) {
                                                        if (debug)
                                                            System.out.println("double: " + name + "=" + Double.parseDouble(value));
                                                        try {
                                                            number(name, Long.parseLong(value), value);
                                                            break outer;
                                                        } catch (NumberFormatException ignored) {
                                                        }
                                                    }
                                                }
                                                if (debug)
                                                    System.out.println("string: " + name + "=" + value);
                                                string(name, value);
                                            }
                                            stringIsUnquoted = false;
                                            s = p;
                                        }
                                        break;
                                }
                            }
                        }
                    case 5:
                }
                break;
            }
        }
    // line 306 "JsonReader.rl"
    } catch (RuntimeException ex) {
        parseRuntimeEx = ex;
    }
    JsonValue root = this.root;
    this.root = null;
    current = null;
    lastChild.clear();
    if (p < pe) {
        int lineNumber = 1;
        for (int i = 0; i < p; i++) if (data[i] == '\n')
            lineNumber++;
        int start = Math.max(0, p - 32);
        throw new SerializationException("Error parsing JSON on line " + lineNumber + " near: " + new String(data, start, p - start) + "*ERROR*" + new String(data, p, Math.min(64, pe - p)), parseRuntimeEx);
    } else if (elements.size != 0) {
        JsonValue element = elements.peek();
        elements.clear();
        if (element != null && element.isObject())
            throw new SerializationException("Error parsing JSON, unmatched brace.");
        else
            throw new SerializationException("Error parsing JSON, unmatched bracket.");
    } else if (parseRuntimeEx != null) {
        throw new SerializationException("Error parsing JSON: " + new String(data), parseRuntimeEx);
    }
    return root;
}
